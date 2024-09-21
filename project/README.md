\documentclass{article}
\usepackage{amsmath}
\usepackage{graphicx}
\usepackage{hyperref}

\title{Описание программы для вычисления решения астроинерциального режима}
\author{}
\date{}

\begin{document}

\maketitle

Программа представляет собой консольное приложение на C++, которое вычисляет навигационные матрицы на основе введенных пользователем параметров. Она использует два режима: \textbf{astro\_inertial} (астроинерциальный режим) и \textbf{correction} (коррекционный режим). В зависимости от выбранного режима, программа запрашивает у пользователя соответствующие параметры, проводит вычисления и выводит результаты.

\section{Основная логика программы}

Матрицу \( M_{\text{МСК}}^{\text{АПСК}} \) можно определить перемножением МНК по углам крена \( C_\gamma \), тангажа \( C_\vartheta \) и курса \( C_\psi \):

\[
M_{\text{МСК}}^{\text{АПСК}} = C_\gamma \cdot C_\vartheta \cdot C_\psi \tag{8}
\]

где

\[
C_\gamma = \begin{pmatrix}
\cos \gamma & 0 & -\sin \gamma \\
0 & 1 & 0 \\
\sin \gamma & 0 & \cos \gamma
\end{pmatrix}
\]

\[
C_\vartheta = \begin{pmatrix}
1 & 0 & 0 \\
0 & \cos \vartheta & \sin \vartheta \\
0 & -\sin \vartheta & \cos \vartheta
\end{pmatrix}
\]

\[
C_\psi = \begin{pmatrix}
\cos \psi & -\sin \psi & 0 \\
\sin \psi & \cos \psi & 0 \\
0 & 0 & 1
\end{pmatrix} \tag{9}
\]

\subsection*{Параметры}
\begin{itemize}
    \item \( \gamma \) — угол крена относительно оси Y;
    \item \( \vartheta \) — угол тангажа относительно оси X;
    \item \( \psi \) — угол курса относительно оси Z.
\end{itemize}

В астроинерциальном режиме осуществляется коррекция выходных параметров АИНС по широте, долготе и курсу, таким образом:

\[
M_{\text{ИСК}}^{\text{ЗПСК}} = M_{\text{АПСК}}^{\text{ЗПСК}} \cdot C_\gamma \cdot C_\vartheta \cdot C_\psi \cdot M_{\text{ГСК}}^{\text{МСК}} \cdot M_{\text{ИСК}}^{\text{ГСК}}
\]

Отсюда получается основное уравнение астроинерциальной навигации:

\[
C_\psi \cdot M_{\text{ГСК}}^{\text{МСК}} = (C_\vartheta)^{-1} \cdot (C_\gamma)^{-1} \cdot (M_{\text{АПСК}}^{\text{ЗПСК}})^{-1} \cdot M_{\text{ИСК}}^{\text{ЗПСК}} \cdot (M_{\text{ИСК}}^{\text{ГСК}})^{-1} \tag{10}
\]

В левой части основного уравнения астронавигации осуществляется решение астроинерциальной задачи по вычислению навигационных параметров широта, долгота и курс (режим 1 - \texttt{astro\_inertial}).

\section{Матрица \( M_{\text{АПСК}}^{\text{ЗПСК}} \)}

Матрица \( M_{\text{АПСК}}^{\text{ЗПСК}} \) будет иметь вид:

\[
M_{\text{АПСК}}^{\text{ЗПСК}} =
\begin{pmatrix}
M_{\text{АПСК}}^{\text{ЗПСК}_{11}} & M_{\text{АПСК}}^{\text{ЗПСК}_{12}} & M_{\text{АПСК}}^{\text{ЗПСК}_{13}} \\
M_{\text{АПСК}}^{\text{ЗПСК}_{21}} & M_{\text{АПСК}}^{\text{ЗПСК}_{22}} & M_{\text{АПСК}}^{\text{ЗПСК}_{23}} \\
M_{\text{АПСК}}^{\text{ЗПСК}_{31}} & M_{\text{АПСК}}^{\text{ЗПСК}_{32}} & M_{\text{АПСК}}^{\text{ЗПСК}_{33}} 
\end{pmatrix}
\]

где:
\[
M_{\text{АПСК}}^{\text{ЗПСК}_{11}} = \cos \alpha_1 \cdot \cos \alpha_3 + \sin \alpha_1 \cdot \sin \alpha_2 \cdot \sin \alpha_3
\]

\[
M_{\text{АПСК}}^{\text{ЗПСК}_{12}} = \sin \alpha_1 \cdot \cos \alpha_2
\]

\[
M_{\text{АПСК}}^{\text{ЗПСК}_{13}} = -\cos \alpha_1 \cdot \sin \alpha_3 + \sin \alpha_1 \cdot \sin \alpha_2 \cdot \cos \alpha_3
\]

\[
M_{\text{АПСК}}^{\text{ЗПСК}_{21}} = -\sin \alpha_1 \cdot \cos \alpha_3 + \cos \alpha_1 \cdot \sin \alpha_2 \cdot \sin \alpha_3
\]

\[
M_{\text{АПСК}}^{\text{ЗПСК}_{22}} = \cos \alpha_1 \cdot \cos \alpha_2
\]

\[
M_{\text{АПСК}}^{\text{ЗПСК}_{23}} = \sin \alpha_1 \cdot \sin \alpha_3 + \cos \alpha_1 \cdot \sin \alpha_2 \cdot \cos \alpha_3
\]

\[
M_{\text{АПСК}}^{\text{ЗПСК}_{31}} = \cos \alpha_2 \cdot \sin \alpha_3
\]

\[
M_{\text{АПСК}}^{\text{ЗПСК}_{32}} = -\sin \alpha_2
\]

\[
M_{\text{АПСК}}^{\text{ЗПСК}_{33}} = \cos \alpha_2 \cdot \cos \alpha_3
\]

\subsection*{Параметры}
\begin{itemize}
    \item \( \alpha_1 \) — угол сопряжения звездного датчика и ИНС относительно оси Y;
    \item \( \alpha_2 \) — угол сопряжения звездного датчика и ИНС относительно оси Z;
    \item \( \alpha_3 \) — угол сопряжения звездного датчика и ИНС относительно оси Z.
\end{itemize}

\section{Матрица перехода от ИСК к ЗПСК}

Матрица перехода определяется преобразованием ИСК в ЗПСК следующим образом:

\[
\mathbf{M_{\text{ИСК}}^{\text{ЗПСК}}} = 
\begin{pmatrix}
M_{11}^{\text{ИСК} \to \text{ЗПСК}} & M_{12}^{\text{ИСК} \to \text{ЗПСК}} & M_{13}^{\text{ИСК} \to \text{ЗПСК}} \\
M_{21}^{\text{ИСК} \to \text{ЗПСК}} & M_{22}^{\text{ИСК} \to \text{ЗПСК}} & M_{23}^{\text{ИСК} \to \text{ЗПСК}} \\
M_{31}^{\text{ИСК} \to \text{ЗПСК}} & M_{32}^{\text{ИСК} \to \text{ЗПСК}} & M_{33}^{\text{ИСК} \to \text{ЗПСК}}
\end{pmatrix}
\]

где:
\[
M_{11}^{\text{ИСК} \to \text{ЗПСК}} = - \cos Az \cdot \sin \alpha - \sin Az \cdot \cos \alpha \cdot \sin \delta 
\]

\[
M_{12}^{\text{ИСК} \to \text{ЗПСК}} = \cos Az \cdot \cos \alpha - \sin Az \cdot \sin \alpha \cdot \sin \delta 
\]

\[
M_{13}^{\text{ИСК} \to \text{ЗПСК}} = \sin Az \cdot \cos \delta 
\]

\[
M_{21}^{\text{ИСК} \to \text{ЗПСК}} = \sin Az \cdot \sin \alpha - \cos Az \cdot \cos \alpha \cdot \sin \delta 
\]

\[
M_{22}^{\text{ИСК} \to \text{ЗПСК}} = - \sin Az \cdot \cos \alpha - \cos Az \cdot \sin \alpha \cdot \sin \delta 
\]

\[
M_{23}^{\text{ИСК} \to \text{ЗПСК}} = \cos Az \cdot \cos \delta 
\]

\[
M_{31}^{\text{ИСК} \to \text{ЗПСК}} = \cos \alpha \cdot \cos \delta 
\]

\[
M_{32}^{\text{ИСК} \to \text{ЗПСК}} = \sin \alpha \cdot \cos \delta 
\]

\[
M_{33}^{\text{ИСК} \to \text{ЗПСК}} = \sin \delta 
\]

\subsection*{Параметры}
\begin{itemize}
    \item \( \alpha \) — угол прямого восхождения;
    \item \( \delta \) — угол склонения;
    \item \( Az \) — азимут.
\end{itemize}

\section{Матрица перехода от ИСК к ГСК}

Определение матрицы учёта суточного вращения Земли на основании поправки истинного гринвичского времени — матрица перехода от инерциальной системы координат (ИСК) к геоцентрической системе координат (ГСК):

\[
\mathbf{M_{\text{ИСК}}^{\text{ГСК}}} = 
\begin{pmatrix}
\cos S & \sin S & 0 \\
-\sin S & \cos S & 0 \\
0 & 0 & 1
\end{pmatrix}
\]

\subsection*{Параметры}
\begin{itemize}
    \item \( S \) — истинное гринвичское время на момент \( t \).
\end{itemize}

В правой части основного уравнения астронавигации осуществляется коррекция выходных параметров АИНС по широте, долготе и курсу (режим 2 - \texttt{correction}).

Элементы матрицы \( M_{\text{ГСК}}^{\text{МСК}} \):

\[
M_{\text{ГСК}}^{\text{МСК}} = \begin{pmatrix}
-\sin \lambda & \cos \lambda & 0 \\
\sin \varphi \cdot \cos \lambda & -\sin \varphi \cdot \sin \lambda & \cos \varphi \\
\cos \varphi \cdot \cos \lambda & \cos \varphi \cdot \sin \lambda & \sin \varphi
\end{pmatrix}
\]

являются функциями широты и долготы, имеем:

\[
\varphi = \arcsin \left( C_\psi \cdot M_{\text{ГСК}}^{\text{МСК}} \right)_{33} \tag{11}
\]

\[
\lambda = \arctan \frac{\left( C_\psi \cdot M_{\text{ГСК}}^{\text{МСК}} \right)_{32}}{\left( C_\psi \cdot M_{\text{ГСК}}^{\text{МСК}} \right)_{31}} \tag{12}
\]

\[
\psi = \arctan \frac{\left( C_\psi \cdot M_{\text{ГСК}}^{\text{МСК}} \right)_{13}}{\left( C_\psi \cdot M_{\text{ГСК}}^{\text{МСК}} \right)_{23}} \tag{13}
\]

\section{Логика выбора режима}

\begin{enumerate}
    \item Программа запрашивает у пользователя режим работы: \texttt{astro\_inertial} или \texttt{correction}.
    \item Если пользователь вводит \texttt{astro\_inertial}, запускается процесс вычисления астроинерциальной матрицы.
    \item Если вводится \texttt{correction}, запускается процесс вычисления коррекционной матрицы.
    \item Если введено неправильное значение, программа выводит ошибку.
\end{enumerate}

\section{Режим "astro\_inertial"}

\begin{enumerate}
    \item Программа запрашивает у пользователя следующие параметры:
    \begin{itemize}
        \item \texttt{theta} (в градусах)
        \item \texttt{roll} (в градусах)
        \item \texttt{alpha\_1} (в градусах)
        \item \texttt{alpha\_2} (в градусах)
        \item \texttt{alpha\_3} (в градусах)
        \item \texttt{alpha} (в градусах)
        \item \texttt{delta} (в градусах)
        \item \texttt{azimut} (в градусах)
        \item \texttt{s} (в градусах)
    \end{itemize}
    \item Все параметры преобразуются из градусов в радианы с помощью встроенной функции \texttt{degreesToRadians}.
    \item Вызывается функция \texttt{astro\_inertial\_mode}, которая вычисляет \textbf{AstroinertialMatrix} (астроинерциальную матрицу), которая используется для дальнейших навигационных вычислений широты \( \varphi \), долготы \( \lambda \) и курса \( \psi \).
    \item На основе вычисленной матрицы программа вызывает функцию \texttt{computeNavigationData}, которая возвращает объект структуры \texttt{NavigationData}.
    \item Все параметры структуры \texttt{NavigationData} преобразуются из радиан в градусы с помощью встроенной функции \texttt{RadiansToDegrees}.
    \item Результаты навигационных вычислений широты \( \varphi \), долготы \( \lambda \) и курса \( \psi \) выводятся на экран с помощью метода \texttt{print} объекта \texttt{NavigationData}.
\end{enumerate}

\section{Режим "correction"}

\begin{enumerate}
    \item Программа запрашивает у пользователя следующие параметры:
    \begin{itemize}
        \item \texttt{psi} (в градусах)
        \item \texttt{lambda} (в градусах)
        \item \texttt{phi} (в градусах)
    \end{itemize}
    \item Все параметры преобразуются из градусов в радианы с помощью функции \texttt{degreesToRadians}.
    \item Вызывается функция \texttt{correction\_mode}, которая вычисляет \textbf{CorrectionMatrix} (коррекционную матрицу), которая используется для дальнейших навигационных вычислений широты \( \varphi \), долготы \( \lambda \) и курса \( \psi \).
    \item Программа использует функцию \texttt{computeNavigationData} для получения навигационной информации на основе \textbf{CorrectionMatrix}.
    \item Все параметры структуры \texttt{NavigationData} преобразуются из радиан в градусы с помощью встроенной функции \texttt{RadiansToDegrees}.
    \item Результаты навигационных вычислений широты \( \varphi \), долготы \( \lambda \) и курса \( \psi \) выводятся на


# Описание программы для вычисления решения астроинерциального режима

Программа представляет собой консольное приложение на C++, которое вычисляет навигационные матрицы на основе введенных пользователем параметров. Она использует два режима: **astro_inertial** (астроинерциальный режим) и **correction** (коррекционный режим). В зависимости от выбранного режима, программа запрашивает у пользователя соответствующие параметры, проводит вычисления и выводит результаты.

## Основная логика программы:



Матрицу \( M_{МСК}^{АПСК} \) можно определить перемножением МНК по углам крена \( C_\gamma \), тангажа \( C_\vartheta \) и курса \( C_\psi \):

\[
M_{МСК}^{АПСК} = C_\gamma \cdot C_\vartheta \cdot C_\psi \tag{8}
\]

где:

\[
C_\gamma = \begin{pmatrix}
\cos \gamma & 0 & -\sin \gamma \\
0 & 1 & 0 \\
\sin \gamma & 0 & \cos \gamma
\end{pmatrix}
\]

\[
C_\vartheta = \begin{pmatrix}
1 & 0 & 0 \\
0 & \cos \vartheta & \sin \vartheta \\
0 & -\sin \vartheta & \cos \vartheta
\end{pmatrix}
\]

\[
C_\psi = \begin{pmatrix}
\cos \psi & -\sin \psi & 0 \\
\sin \psi & \cos \psi & 0 \\
0 & 0 & 1
\end{pmatrix} \tag{9}
\]

#### Параметры:
- \( \gamma\) — угол крена относительно оси Y;
- \( \vartheta\) — угол тангажа относительно оси X;
- \( \psi\) — угол курса относительно оси Z.

В астроинерциальном режиме осуществляется коррекция выходных параметров АИНС по широте, долготе и курсу, таким образом:

\[
M_{ИСК}^{ЗПСК} = M_{АПСК}^{ЗПСК} \cdot C_\gamma \cdot C_\vartheta \cdot C_\psi \cdot M_{ГСК}^{МСК} \cdot M_{ИСК}^{ГСК}
\]

Отсюда получается основное уравнение астроинерциальной навигации:

\[
C_\psi \cdot M_{ГСК}^{МСК} = (C_\vartheta)^{-1} \cdot (C_\gamma)^{-1} \cdot (M_{АПСК}^{ЗПСК})^{-1} \cdot M_{ИСК}^{ЗПСК} \cdot (M_{ИСК}^{ГСК})^{-1} \tag{10}
\]

В левой части основного уравнения астронавигации осуществляется решение астроинерциальной задачи по вычислению навигационных параметров широта, долгота и курс (режим 1 - `astro_inertial`). 

## Матрица \( M_{АПСК}^{ЗПСК} \)

Матрица \( M_{АПСК}^{ЗПСК} \) будет иметь вид:

\[
M_{АПСК}^{ЗПСК} =
\begin{pmatrix}
M_{АПСК}^{ЗПСК_{11}} & M_{АПСК}^{ЗПСК_{12}} & M_{АПСК}^{ЗПСК_{13}} \\
M_{АПСК}^{ЗПСК_{21}} & M_{АПСК}^{ЗПСК_{22}} & M_{АПСК}^{ЗПСК_{23}} \\
M_{АПСК}^{ЗПСК_{31}} & M_{АПСК}^{ЗПСК_{32}} & M_{АПСК}^{ЗПСК_{33}} 
\end{pmatrix}
\]

где:
- \[M_{АПСК}^{ЗПСК_{11}} = \cos \alpha_1 \cdot \cos \alpha_3 + \sin \alpha_1 \cdot \sin \alpha_2 \cdot \sin \alpha_3\]
- \[M_{АПСК}^{ЗПСК_{12}} = \sin \alpha_1 \cdot \cos \alpha_2\]
-\[M_{АПСК}^{ЗПСК_{13}} = -\cos \alpha_1 \cdot \sin \alpha_3 + \sin \alpha_1 \cdot \sin \alpha_2 \cdot \cos \alpha_3\]
- \[M_{АПСК}^{ЗПСК_{21}} = -\sin \alpha_1 \cdot \cos \alpha_3 + \cos \alpha_1 \cdot \sin \alpha_2 \cdot \sin \alpha_3\]
- \[M_{АПСК}^{ЗПСК_{22}} = \cos \alpha_1 \cdot \cos \alpha_2\]
- \[M_{АПСК}^{ЗПСК_{23}} = \sin \alpha_1 \cdot \sin \alpha_3 + \cos \alpha_1 \cdot \sin \alpha_2 \cdot \cos \alpha_3\]
- \[M_{АПСК}^{ЗПСК_{31}} = \cos \alpha_2 \cdot \sin \alpha_3\]
- \[M_{АПСК}^{ЗПСК_{32}} = -\sin \alpha_2\]
- \[M_{АПСК}^{ЗПСК_{33}} = \cos \alpha_2 \cdot \cos \alpha_3\]

#### Параметры:
- \( \alpha_1\) — угол сопряжения звездного датчика и ИНС относительно оси Y;
- \( \alpha_2\) — угол сопряжения звездного датчика и ИНС относительно оси Z;
- \( \alpha_3\) — угол сопряжения звездного датчика и ИНС относительно оси Z;


### Матрица перехода от ИСК к ЗПСК

Матрица перехода определяется преобразованием ИСК в ЗПСК следующим образом:

\[
\mathbf{M_{ИСК}^{ЗПСК}} = 
\begin{pmatrix}
M_{11}^{ИСК\to ЗПСК} & M_{12}^{ИСК\to ЗПСК} & M_{13}^{ИСК\to ЗПСК} \\
M_{21}^{ИСК\to ЗПСК} & M_{22}^{ИСК\to ЗПСК} & M_{23}^{ИСК\to ЗПСК} \\
M_{31}^{ИСК\to ЗПСК} & M_{32}^{ИСК\to ЗПСК} & M_{33}^{ИСК\to ЗПСК}
\end{pmatrix}
\]

где:
- \( M_{11}^{ИСК\to ЗПСК} = - \cos Az \cdot \sin \alpha - \sin Az \cdot \cos \alpha \cdot \sin \delta \)
- \( M_{12}^{ИСК\to ЗПСК} = \cos Az \cdot \cos \alpha - \sin Az \cdot \sin \alpha \cdot \sin \delta \)
- \( M_{13}^{ИСК\to ЗПСК} = \sin Az \cdot \cos \delta \)
- \( M_{21}^{ИСК\to ЗПСК} = \sin Az \cdot \sin \alpha - \cos Az \cdot \cos \alpha \cdot \sin \delta \)
- \( M_{22}^{ИСК\to ЗПСК} = - \sin Az \cdot \cos \alpha - \cos Az \cdot \sin \alpha \cdot \sin \delta \)
- \( M_{23}^{ИСК\to ЗПСК} = \cos Az \cdot \cos \delta \)
- \( M_{31}^{ИСК\to ЗПСК} = \cos \alpha \cdot \cos \delta \)
- \( M_{32}^{ИСК\to ЗПСК} = \sin \alpha \cdot \cos \delta \)
- \( M_{33}^{ИСК\to ЗПСК} = \sin \delta \)

#### Параметры:
- \( \alpha \) — угол прямого восхождения;
- \( \delta \) — угол склонения;
- \( Az \) — азимут.


### Матрица перехода от ИСК к ГСК

Определение матрицы учёта суточного вращения Земли на основании поправки истинного гринвичского времени — матрица перехода от инерциальной системы координат (ИСК) к геоцентрической системе координат (ГСК):

\[
\mathbf{M_{ИСК}^{ГСК}} = 
\begin{pmatrix}
\cos S & \sin S & 0 \\
-\sin S & \cos S & 0 \\
0 & 0 & 1
\end{pmatrix}
\]

#### Параметры:
- \( S \) — истинное гринвичское время на момент \( t \).


В правой часть основного уравнения астронавигации осуществляется коррекция выходных параметров АИНС по широте, долготе и курсу (режим 2 - `correction`). 

Элементы матрицы \[M_{ГСК}^{МСК}\]:

\[
M_{ГСК}^{МСК} = \begin{pmatrix}
-\sin \lambda & \cos \lambda & 0 \\
\sin \varphi \cdot \cos \lambda & -\sin \varphi \cdot \sin \lambda & \cos \varphi \\
\cos \varphi \cdot \cos \lambda & \cos \varphi \cdot \sin \lambda & \sin \varphi
\end{pmatrix}
\]

являются функциями широты и долготы, имеем:

\[
\varphi = \arcsin \left( C_\psi \cdot M_{ГСК}^{МСК} \right)_{33} \tag{11}
\]

\[
\lambda = \arctan \frac{\left( C_\psi \cdot M_{ГСК}^{МСК} \right)_{32}}{\left( C_\psi \cdot M_{ГСК}^{МСК} \right)_{31}} \tag{12}
\]

\[
\psi = \arctan \frac{\left( C_\psi \cdot M_{ГСК}^{МСК} \right)_{13}}{\left( C_\psi \cdot M_{ГСК}^{МСК} \right)_{23}} \tag{13}
\]

### Логика выбора режима:

1. Программа запрашивает у пользователя режим работы: `astro_inertial` или `correction`.

2. Если пользователь вводит `astro_inertial`, запускается процесс вычисления астроинерциальной матрицы.

3. Если вводится `correction`, запускается процесс вычисления коррекционной матрицы.

4. Если введено неправильное значение, программа выводит ошибку.


### Режим "astro_inertial"

1. Программа запрашивает у пользователя следующие параметры:
   - `theta` (в градусах)
   - `roll` (в градусах)
   - `alpha_1`(в градусах)
   - `alpha_2`(в градусах)
   - `alpha_3` (в градусах)
   - `alpha` (в градусах)
   - `delta` (в градусах)
   - `azimut` (в градусах)
   - `s` (в градусах)

2. Все параметры преобразуются из градусов в радианы с помощью встроенной функции `degreesToRadians`.

3. Вызывается функция `astro_inertial_mode`, которая вычисляет **AstroinertialMatrix** (астроинерциальную матрицу), которая используется для дальнейших навигационных вычислений широты φ, долготы λ и курса ψ.

4. На основе вычисленной матрицы программа вызывает функцию `computeNavigationData`, которая возвращает объект структуры `NavigationData`.

5. Все параметры структуры `NavigationData` преобразуются из радиан в градусы с помощью встроенной функции `RadiansToDegrees`.

6. Результаты навигационных вычислений широты φ, долготы λ и курса ψ выводятся на экран с помощью метода `print` объекта `NavigationData`.


### Режим "correction"

1. Программа запрашивает у пользователя следующие параметры:
   - `psi` (в градусах)
   - `lambda` (в градусах)
   - `phi` (в градусах)

2. Все параметры преобразуются из градусов в радианы с помощью функции `degreesToRadians`.

3. Вызывается функция `correction_mode`, которая вычисляет **CorrectionMatrix** (коррекционную матрицу), которая используется для дальнейших навигационных вычислений широты φ, долготы λ и курса ψ.

4. Программа использует функцию `computeNavigationData` для получения навигационной информации на основе **CorrectionMatrix**.

5. Все параметры структуры `NavigationData` преобразуются из радиан в градусы с помощью встроенной функции `RadiansToDegrees`.

6. Результаты навигационных вычислений широты φ, долготы λ и курса ψ выводятся на экран с помощью метода `print` объекта `NavigationData`.


## Пример работы программы:

### Входные данные:
```
Enter mode (astro or correction): astro
Enter theta (in degrees): 45
Enter roll (in degrees): 30
Enter alpha_1 (in degrees): 10
Enter alpha_2 (in degrees): 20
Enter alpha_3 (in degrees): 30
Enter alpha (in degrees): 5
Enter delta (in degrees): 60
Enter azimut (in degrees): 90
Enter s (in degrees): 1.0
```

### Вывод:
```
Navigation Data:
... (данные вычисленного результата) ...
```

## Примечания:
- Программа не полагается на сторонние библиотеки для вычисления матриц, а полагается на самописные классы и служебные функции.
- Основные функции для расчета находятся в файлах `AstroInertialModeResultMatrix.cpp`, `CoorectionModeResultMatrix.cpp`.
- Результат работы сохраняется в объектах класса `NavigationData`.
