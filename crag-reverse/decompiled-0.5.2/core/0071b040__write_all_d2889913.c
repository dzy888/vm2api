// 0071b040 write_all

/* <<serde_json[dc3825464c436029]::value::Value as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter as
   std[6c98fd8553dbae28]::io::Write>::write_all */

ulonglong __rustcall
<<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
::write_all(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    cVar2 = (*(code *)PTR_write_str_00799488)();
    puVar1 = PTR_<&str>_007991e8;
    while (cVar2 != '\0') {
      uVar3 = (*(code *)puVar1)();
      switch((uint)uVar3 & 3) {
      case 0:
        cVar2 = *(char *)(uVar3 + 0x10);
        goto joined_r0x0071b0a5;
      case 1:
        if (*(char *)(uVar3 + 0x1f) != '#') {
          return uVar3;
        }
        (*(code *)PTR_drop_00799040)();
        break;
      case 2:
        lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar2 = (**(code **)(lVar4 + 0x10))();
        if (cVar2 == '\0') {
          return uVar3;
        }
        break;
      case 3:
        cVar2 = (char)(uVar3 >> 0x20);
        if (0x2a < uVar3 >> 0x20) {
          cVar2 = -1;
        }
joined_r0x0071b0a5:
        if (cVar2 != '#') {
          return uVar3;
        }
      }
      cVar2 = (*(code *)PTR_write_str_00799488)();
    }
  }
  return 0;
}


