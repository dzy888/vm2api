// 001f3a50 sleep

/* std[6c98fd8553dbae28]::thread::functions::sleep */

void __rustcall
std[6c98fd8553dbae28]::thread::functions::sleep
          (ulonglong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  ulonglong local_40;
  ulonglong local_38;
  int local_2c;
  
  puVar2 = PTR_clock_nanosleep_0021aaf8;
  if (param_1 != 0 || param_2 != 0) {
    local_38 = (ulonglong)param_2;
    do {
      local_40 = 0x7fffffffffffffff;
      if (param_1 < 0x7fffffffffffffff) {
        local_40 = param_1;
      }
      param_1 = param_1 - local_40;
      local_2c = (*(code *)puVar2)(&local_40,&local_40);
      if (local_2c == 0) {
        local_38 = 0;
      }
      else {
        if (local_2c != 4) {
          (*(code *)PTR_<i32,i32>_0021a778)
                    (0,&DAT_001145fc,param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217f60);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        param_1 = param_1 + local_40;
      }
    } while (0 < (longlong)local_38 || param_1 != 0);
  }
  return;
}


