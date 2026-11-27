// 00701790 remote_abort

/* <tokio[d7d91d38da47d894]::runtime::task::raw::RawTask>::remote_abort */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::raw::RawTask>::remote_abort(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined8 local_10;
  ulonglong local_8;
  
  puVar2 = (ulonglong *)*param_1;
  uVar5 = *puVar2;
  do {
    if ((uVar5 & 0x22) != 0) {
      bVar4 = false;
      local_10 = 0;
      break;
    }
    if ((uVar5 & 1) == 0) {
      if ((uVar5 & 4) != 0) {
        local_8 = uVar5 | 0x20;
        goto LAB_007017f8;
      }
      if ((longlong)uVar5 < 0) {
        (*(code *)PTR_panic_00799338)
                  (&local_10,&anon_c153c4d816f71af2accb98944a80e600_61_llvm_2617760850115737065);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_8 = uVar5 + 100;
      bVar4 = true;
    }
    else {
      local_8 = uVar5 | 0x24;
LAB_007017f8:
      bVar4 = false;
    }
    local_10 = 1;
    LOCK();
    uVar1 = *puVar2;
    bVar6 = uVar5 == uVar1;
    if (bVar6) {
      *puVar2 = local_8;
    }
    else {
      uVar5 = uVar1;
    }
    UNLOCK();
  } while (!bVar6);
  if (bVar4) {
                    /* WARNING: Could not recover jumptable at 0x0070181d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar2[2] + 8))();
    return;
  }
  return;
}


