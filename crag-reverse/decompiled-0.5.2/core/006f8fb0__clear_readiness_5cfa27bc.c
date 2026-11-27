// 006f8fb0 clear_readiness

/* <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::clear_readiness */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::clear_readiness
          (longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar5 = *param_2;
  uVar3 = *(ushort *)(param_2 + 1);
  uVar6 = *(ulonglong *)(lVar4 + 0x90);
  do {
    if (((uint)(uVar6 >> 0x10) & 0x7fff) != (uint)uVar3) {
      return;
    }
    puVar1 = (ulonglong *)(lVar4 + 0x90);
    LOCK();
    uVar2 = *puVar1;
    bVar7 = uVar6 == uVar2;
    if (bVar7) {
      *puVar1 = (ulonglong)
                ((uint)uVar6 & ((uint)uVar5 & 0x33 ^ 0x8000003f) | (uVar3 & 0x7fff) << 0x10);
    }
    else {
      uVar6 = uVar2;
    }
    UNLOCK();
  } while (!bVar7);
  return;
}


