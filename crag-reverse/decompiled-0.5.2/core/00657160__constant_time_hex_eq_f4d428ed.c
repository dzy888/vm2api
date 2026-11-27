// 00657160 constant_time_hex_eq

/* craggemini_core[66f3c71560d70857]::binding::constant_time_hex_eq */

bool __rustcall
craggemini_core[66f3c71560d70857]::binding::constant_time_hex_eq
          (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  
  puVar2 = PTR_<u8>_00799268;
  if (param_2 != param_4) {
    return false;
  }
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar1 = lVar4 + 1;
      (*(code *)puVar2)(*(undefined1 *)(param_1 + lVar4));
      lVar4 = lVar1;
    } while (param_2 != lVar1);
  }
  cVar3 = (*(code *)PTR_<u8>_00799268)();
  return cVar3 != '\0';
}


