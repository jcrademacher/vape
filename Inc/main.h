/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define COIL_THERM_Pin GPIO_PIN_0
#define COIL_THERM_GPIO_Port GPIOA
#define DISP_RES_N_Pin GPIO_PIN_1
#define DISP_RES_N_GPIO_Port GPIOA
#define COIL_PWM_Pin GPIO_PIN_2
#define COIL_PWM_GPIO_Port GPIOA
#define CHG_DET_Pin GPIO_PIN_3
#define CHG_DET_GPIO_Port GPIOA
#define CHGR_PG_N_Pin GPIO_PIN_4
#define CHGR_PG_N_GPIO_Port GPIOA
#define CHG_AL_N_Pin GPIO_PIN_5
#define CHG_AL_N_GPIO_Port GPIOA
#define BTN2_Pin GPIO_PIN_6
#define BTN2_GPIO_Port GPIOA
#define BTN1_Pin GPIO_PIN_7
#define BTN1_GPIO_Port GPIOA
#define CHGR_STAT_N_Pin GPIO_PIN_1
#define CHGR_STAT_N_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
