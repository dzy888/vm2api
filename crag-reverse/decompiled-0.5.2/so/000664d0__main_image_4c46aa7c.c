// 000664d0 main_image

/* agy_bridge[64a9e9deac6c45ce]::hooks::main_image */

undefined8 __rustcall
agy_bridge[64a9e9deac6c45ce]::hooks::main_image
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  if (*(char *)param_1[1] == '\0') {
    *param_3 = *param_1;
    return 1;
  }
  return 0;
}


