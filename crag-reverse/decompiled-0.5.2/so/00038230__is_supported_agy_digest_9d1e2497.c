// 00038230 is_supported_agy_digest

/* agy_bridge[64a9e9deac6c45ce]::is_supported_agy_digest */

bool __rustcall
agy_bridge[64a9e9deac6c45ce]::is_supported_agy_digest
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_2 != 0x40) {
    return false;
  }
  iVar1 = (*(code *)PTR_bcmp_000c3b80)(param_4,0x40);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = (*(code *)PTR_bcmp_000c3b80)(param_4,0x40);
  return iVar1 == 0;
}


