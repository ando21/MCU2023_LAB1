/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
    void trafficInit() {
  	  HAL_GPIO_WritePin(GPIOA, RED_1_Pin, RESET);
  	  HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin, RESET);
  	  HAL_GPIO_WritePin(GPIOA, GREEN_1_Pin, RESET);

  	  HAL_GPIO_WritePin(GPIOA, RED_2_Pin, RESET);
  	  HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin, RESET);
  	  HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin, RESET);

  	  HAL_GPIO_WritePin(GPIOB, A1_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, B1_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, C1_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, D1_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, E1_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, F1_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, G1_Pin, SET);


	  HAL_GPIO_WritePin(GPIOB, A2_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, B2_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, C2_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, D2_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, E2_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, F2_Pin, SET);
	  HAL_GPIO_WritePin(GPIOB, G2_Pin, SET);
    }
    void displayNumber1(int number) {
  	  switch(number) {
  	  case 0:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, SET);
  		  break;
  	  case 1:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, SET);
  		  break;
  	  case 2:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, RESET);
  		  break;
  	  case 3:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, RESET);
  		  break;
  	  case 4:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, RESET);
  		  break;
  	  case 5:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, RESET);
  		  break;
  	  case 6:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, RESET);
  		  break;
  	  case 7:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, SET);
  		  break;
  	  case 8:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, RESET);
  		  break;
  	  case 9:
  		  HAL_GPIO_WritePin(GPIOB, A1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, B1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, C1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, D1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, E1_Pin, SET);
  		  HAL_GPIO_WritePin(GPIOB, F1_Pin, RESET);
  		  HAL_GPIO_WritePin(GPIOB, G1_Pin, RESET);
  		  break;
  	  }
    }

    void displayNumber2(int number) {
	  switch(number) {
	  case 0:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(GPIOB, A2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, B2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, C2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, D2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, E2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOB, F2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOB, G2_Pin, RESET);
		  break;
	  }
    }


  void red_on(int status) {
	  switch(status) {
	  case 1:
		  HAL_GPIO_WritePin(GPIOA, RED_1_Pin, SET);
		  HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOA, GREEN_1_Pin, RESET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(GPIOA, RED_2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin, RESET);
		  break;
	  }
  }

  void yellow_on(int status) {
	  switch(status) {
	  case 1:
		  HAL_GPIO_WritePin(GPIOA, RED_1_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin, SET);
		  HAL_GPIO_WritePin(GPIOA, GREEN_1_Pin, RESET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(GPIOA, RED_2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin, SET);
		  HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin, RESET);
		  break;
	  }
  }

  void green_on(int status) {
	  switch(status) {
	  case 1:
		  HAL_GPIO_WritePin(GPIOA, RED_1_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOA, YELLOW_1_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOA, GREEN_1_Pin, SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(GPIOA, RED_2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOA, YELLOW_2_Pin, RESET);
		  HAL_GPIO_WritePin(GPIOA, GREEN_2_Pin, SET);
		  break;
	  }
  }

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  trafficInit();
  int count1 = 5;
  int count2 = 3;
  int status = 1;
  while (1)
  {
	  if (status == 1) {
		  if (count1 > 0) {
			  if (count2 == 0) count2 = 2;
			  red_on(status);
			  if (count1 > 2) {
				  green_on(status + 1);
			  } else {
				  yellow_on(status + 1);
			  }
		  } else {
			  status = 2;
			  count2 = 5;
			  count1 = 3;
			  red_on(status);
			  green_on(status - 1);
		  }
		  displayNumber1(count1);
		  displayNumber2(count2);
		  count1--;
		  count2--;
	  } else {
		  if (count2 > 0) {
			  if (count1 == 0) count1 = 2;
			  red_on(status);
			  if (count2 > 2) {
				  green_on(status - 1);
			  } else {
				  yellow_on(status - 1);
			  }
		  } else {
			  status = 1;
			  count1 = 5;
			  count2 = 3;
			  red_on(status);
			  green_on(status + 1);
		  }
		  displayNumber1(count1);
		  displayNumber2(count2);
		  count1--;
		  count2--;
	  }
	  HAL_Delay(1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, RED_1_Pin|YELLOW_1_Pin|GREEN_1_Pin|RED_2_Pin
                          |YELLOW_2_Pin|GREEN_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, G1_Pin|F1_Pin|E1_Pin|F2_Pin
                          |E2_Pin|D2_Pin|C2_Pin|B2_Pin
                          |A2_Pin|D1_Pin|C1_Pin|B1_Pin
                          |A1_Pin|G2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : RED_1_Pin YELLOW_1_Pin GREEN_1_Pin RED_2_Pin
                           YELLOW_2_Pin GREEN_2_Pin */
  GPIO_InitStruct.Pin = RED_1_Pin|YELLOW_1_Pin|GREEN_1_Pin|RED_2_Pin
                          |YELLOW_2_Pin|GREEN_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : G1_Pin F1_Pin E1_Pin F2_Pin
                           E2_Pin D2_Pin C2_Pin B2_Pin
                           A2_Pin D1_Pin C1_Pin B1_Pin
                           A1_Pin G2_Pin */
  GPIO_InitStruct.Pin = G1_Pin|F1_Pin|E1_Pin|F2_Pin
                          |E2_Pin|D2_Pin|C2_Pin|B2_Pin
                          |A2_Pin|D1_Pin|C1_Pin|B1_Pin
                          |A1_Pin|G2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
