// 006f9390 poll

/* WARNING: Instruction at (ram,0x006f94a4) overlaps instruction at (ram,0x006f94a1)
    */
/* <tokio[d7d91d38da47d894]::task::coop::Coop<tokio[d7d91d38da47d894]::sync::watch::changed_impl<()>::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::task::coop::Coop<tokio[d7d91d38da47d894]::sync::watch::changed_impl<()>::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,code *param_2)

{
  code cVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *unaff_RBP;
  code *pcVar13;
  longlong *in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  uint7 uStack_37;
  
  lVar4 = *in_FS_OFFSET;
  pcVar13 = param_2;
  if (*(char *)(lVar4 + -0xf0) == '\0') {
LAB_006f93c6:
    uVar3 = *(ushort *)(lVar4 + -0xf4);
    cVar7 = (char)(uVar3 >> 8);
    if ((uVar3 & 1) != 0) {
      if (uVar3 >> 8 == 0) {
        (*(code *)PTR_defer_0079a740)();
LAB_006f962f:
        unaff_RBP = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),2);
LAB_006f968c:
        return (ulonglong)unaff_RBP & 0xffffffff;
      }
      cVar7 = cVar7 + -1;
    }
    *(char *)(lVar4 + -0xf3) = cVar7;
    uVar10 = (uint)uVar3 << 8;
  }
  else {
    uVar10 = 0;
    if (*(char *)(lVar4 + -0xf0) == '\x01') {
      pcVar13 = std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
                <tokio[d7d91d38da47d894]::runtime::context::Context>;
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar4 + -0xf0) = 0;
      goto LAB_006f93c6;
    }
  }
  pcVar9 = (char *)((longlong)&switchD_006f9410::switchdataD_001b6d7c +
                   (longlong)
                   (int)(&switchD_006f9410::switchdataD_001b6d7c)
                        [*(byte *)((longlong)param_1 + 0x21)]);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)((longlong)param_1 + 0x21)) {
  case 0:
    *(undefined1 *)(param_1 + 4) = 0;
    *(int *)param_1 = (int)param_1[2];
    *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(int *)(param_1 + 1) = (int)param_1[3];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined1 *)(param_1 + 5) = 0;
    goto switchD_006f943a_caseD_0;
  case 1:
    (*(code *)PTR_panic_const_async_fn_resumed_007991b8)();
    goto LAB_006f96cd;
  case 3:
    cVar1 = *(code *)(param_1 + 5);
    break;
  case 4:
    goto switchD_006f9410_caseD_4;
  default:
    cVar1 = pcVar13[0x28];
    break;
  case 6:
    *pcVar9 = *pcVar9 + (char)pcVar9;
    goto switchD_006f943a_caseD_2;
  case 7:
    *pcVar9 = *pcVar9 + (char)pcVar9;
  case 2:
    (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
    goto LAB_006f96cd;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  default:
switchD_006f943a_caseD_0:
    *(undefined1 *)(param_1 + 5) = 1;
    while( true ) {
      lVar5 = *param_1;
      local_90 = CONCAT44(local_90._4_4_,8);
      uVar8 = <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
              ::with::<tokio[d7d91d38da47d894]::runtime::context::thread_rng_n::_closure_0_,u32>
                        (&anon_1c7207ea9655bfcf55d918eab6d9918c_0_llvm_17559541839288726608,
                         &local_90);
      if (7 < uVar8) break;
      local_90 = lVar5 + (ulonglong)uVar8 * 0x20;
      uVar6 = *(ulonglong *)(lVar5 + (ulonglong)uVar8 * 0x20);
      uVar11 = uVar6 >> 2;
      uStack_38 = 0;
      local_40 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      uVar12 = *(ulonglong *)(*param_1 + 0x120) & 0xfffffffffffffffe;
      local_70 = local_90;
      uStack_68 = uVar11;
      if (*(ulonglong *)param_1[1] != uVar12) {
        *(ulonglong *)param_1[1] = uVar12;
        unaff_RBP = (longlong *)0x0;
LAB_006f963e:
        local_88 = (longlong *)&uStack_38;
        local_80 = &uStack_68;
        local_78 = &local_60;
        <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::drop_notified(&local_90);
        if (local_50 != 0) {
          (**(code **)(local_50 + 0x18))();
        }
        *(undefined1 *)(param_1 + 4) = 0;
        *(undefined1 *)((longlong)param_1 + 0x21) = 1;
        goto LAB_006f968c;
      }
      if ((*(ulonglong *)(*param_1 + 0x120) & 1) != 0) {
        unaff_RBP = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        goto LAB_006f963e;
      }
      *(undefined1 *)(param_1 + 4) = 0;
      uStack_68._0_4_ = (undefined4)uVar11;
      uStack_68._4_4_ = (uint)(uVar6 >> 0x22);
      param_1[5] = local_90;
      *(undefined4 *)(param_1 + 6) = (undefined4)uStack_68;
      *(uint *)((longlong)param_1 + 0x34) = uStack_68._4_4_;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = lStack_48;
      param_1[0xb] = 0;
      param_1[0xc] = (ulonglong)uStack_37 << 8;
switchD_006f9410_caseD_4:
      local_90 = param_1[5];
      unaff_RBP = param_1 + 0xc;
      local_88 = unaff_RBP;
      local_80 = param_1 + 6;
      local_78 = param_1 + 7;
      cVar7 = <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::poll_notified
                        (&local_90,param_2);
      if (cVar7 != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x21) = 4;
        unaff_RBP = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),2);
        if ((uVar10 >> 8 & 1) == 0) goto LAB_006f968c;
        bVar2 = *(byte *)(lVar4 + -0xf0);
        unaff_RBP = (longlong *)(ulonglong)bVar2;
        if (bVar2 != 0) {
          if (bVar2 == 2) goto LAB_006f968c;
          (*(code *)PTR_register_00799240)();
          *(undefined1 *)(lVar4 + -0xf0) = 0;
        }
        *(undefined1 *)(lVar4 + -0xf4) = 1;
        *(char *)(lVar4 + -0xf3) = (char)(uVar10 >> 0x10);
        goto LAB_006f962f;
      }
      local_90 = param_1[5];
      local_88 = unaff_RBP;
      local_80 = param_1 + 6;
      local_78 = param_1 + 7;
      <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::drop_notified(&local_90);
      if (param_1[9] != 0) {
        (**(code **)(param_1[9] + 0x18))();
      }
      *(undefined1 *)(param_1 + 4) = 0;
    }
    (*(code *)PTR_panic_bounds_check_00799520)
              (extraout_XMM0_Da,&anon_d250138afc359909044a05a15195067d_32_llvm_15875357693395155123)
    ;
    break;
  case (code)0x1:
    (*(code *)PTR_panic_const_async_fn_resumed_007991b8)();
    break;
  case (code)0x2:
switchD_006f943a_caseD_2:
    (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
  }
LAB_006f96cd:
                    /* WARNING: Does not return */
  pcVar13 = (code *)invalidInstructionException();
  (*pcVar13)();
}


