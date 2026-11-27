// 006ffc20 {closure#0}

/* WARNING: Instruction at (ram,0x006ffd87) overlaps instruction at (ram,0x006ffd82)
    */
/* tokio[d7d91d38da47d894]::signal::make_future::{closure#0} */

longlong __rustcall tokio[d7d91d38da47d894]::signal::make_future::_closure_0_(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 *puVar6;
  longlong *unaff_R13;
  undefined1 auStack_58 [7];
  undefined1 local_51;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  puVar5 = &switchD_006ffc46::switchdataD_001b7348;
  plVar3 = (longlong *)
           ((longlong)&switchD_006ffc46::switchdataD_001b7348 +
           (longlong)(int)(&switchD_006ffc46::switchdataD_001b7348)[*(byte *)(param_1 + 0x13)]);
  puVar6 = auStack_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 0x13)) {
  case 0:
    plVar3 = param_1 + 2;
    param_1[2] = *param_1;
    param_1[3] = param_1[1];
    param_1[4] = (longlong)plVar3;
    unaff_R13 = param_1 + 0x12;
    *(undefined1 *)(param_1 + 0x12) = 0;
    puVar5 = (uint *)(*param_1 + 0x10);
  case 7:
    param_1[7] = (longlong)puVar5;
    param_1[8] = (longlong)(plVar3 + 1);
    *(undefined1 *)((longlong)param_1 + 0x49) = 0;
    cVar2 = <tokio[d7d91d38da47d894]::task::coop::Coop<tokio[d7d91d38da47d894]::sync::watch::changed_impl<()>::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
            ::poll(param_1 + 5);
    if (cVar2 == '\x02') {
      *(undefined1 *)(param_1 + 0x12) = 3;
      *(undefined1 *)(param_1 + 0x13) = 3;
      return 0;
    }
    if (*(char *)((longlong)param_1 + 0x49) == '\x04') {
      local_50 = param_1[10];
      local_48 = param_1 + 0x11;
      local_40 = param_1 + 0xb;
      local_38 = param_1 + 0xc;
      <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::drop_notified(&local_50);
      if (param_1[0xe] != 0) {
        (**(code **)(param_1[0xe] + 0x18))();
      }
      *(undefined1 *)(param_1 + 9) = 0;
    }
    *(undefined1 *)unaff_R13 = 1;
    if (cVar2 != '\x01') {
      *(undefined1 *)(param_1 + 0x13) = 1;
      return param_1[2];
    }
    (*(code *)PTR_unwrap_failed_00799028)
              (&DAT_00794e70,&local_51,&PTR_s__vendor_tokio_1_54_1_src_signal__00794e58);
    goto LAB_006ffda4;
  case 2:
    (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
    puVar6 = auStack_58;
    break;
  case 3:
    plVar3 = (longlong *)(ulonglong)*(byte *)(param_1 + 0x12);
  case 4:
                    /* WARNING: Could not recover jumptable at 0x006ffc93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*(code *)((longlong)&UINT_001b7358 + (longlong)(int)(&UINT_001b7358)[(longlong)plVar3])
            )();
    return lVar4;
  case 5:
    "called `Result::unwrap()` on an `Err` value"
    [(longlong)(int)(&switchD_006ffc46::switchdataD_001b7348)[*(byte *)(param_1 + 0x13)] + 1] =
         "called `Result::unwrap()` on an `Err` value"
         [(longlong)(int)(&switchD_006ffc46::switchdataD_001b7348)[*(byte *)(param_1 + 0x13)] + 1] +
         'H';
    puVar6 = auStack_58;
    break;
  case 6:
    *(uint *)((ulonglong)auStack_58 & 0xffffffff) =
         *(uint *)((ulonglong)auStack_58 & 0xffffffff) | (uint)auStack_58;
    puVar6 = (undefined1 *)((ulonglong)plVar3 & 0xffffffff);
  }
  *(undefined8 *)(puVar6 + -8) = 0x6ffd88;
  (*(code *)PTR_panic_const_async_fn_resumed_007991b8)();
  *(undefined8 *)(puVar6 + -8) = 0x6ffd95;
  (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
LAB_006ffda4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


