// 0018a380 <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#3},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#3},
   ()> */

longlong * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_3_,()>
          (longlong *param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,char param_5,
          undefined **param_6,longlong *param_7)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *local_140;
  undefined8 local_138;
  undefined **local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_138 = param_2;
  local_130 = param_6;
  if ((((ulonglong)param_3 & 1) != 0) || (*(longlong *)PTR_MIN_0021a198 != 0)) goto LAB_0018a52c;
  param_3 = (undefined **)0xe;
  (*(code *)PTR_getenv_0021a1a0)();
  plVar5 = local_128;
  if (local_128 == (longlong *)0xffffffffffffffff) {
    uVar11 = 0x200000;
  }
  else {
    param_3 = local_118;
    (*(code *)PTR_from_utf8_00219d78)();
    if (((int)local_b8 == 1) || (local_a8 == (undefined **)0x0)) {
LAB_0018a4ea:
      uVar11 = 0x200000;
    }
    else {
      if (local_a8 == (undefined **)0x1) {
        cVar3 = *uStack_b0;
        if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_0018a4ea;
      }
      else {
        cVar3 = *uStack_b0;
      }
      uVar10 = (ulonglong)(cVar3 == '+');
      param_3 = (undefined **)((longlong)local_a8 - uVar10);
      if ((undefined **)0x10 < param_3) {
        uVar11 = 0;
        lVar8 = 0;
        while( true ) {
          if (lVar8 == (longlong)local_a8 + -uVar10) goto joined_r0x0018a4fd;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar11;
          param_3 = SUB168(auVar1 * ZEXT816(10),8);
          uVar4 = SUB168(auVar1 * ZEXT816(10),0);
          if (param_3 != (undefined **)0x0) break;
          param_3 = (undefined **)(ulonglong)((byte)uStack_b0[lVar8 + uVar10] - 0x30);
          uVar11 = uVar4 + (longlong)param_3;
          if ((9 < (byte)uStack_b0[lVar8 + uVar10] - 0x30) ||
             (lVar8 = lVar8 + 1, CARRY8(uVar4,(ulonglong)param_3))) break;
        }
        goto LAB_0018a4ea;
      }
      if (param_3 == (undefined **)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        lVar8 = 0;
        do {
          uVar9 = (byte)uStack_b0[lVar8 + uVar10] - 0x30;
          param_3 = (undefined **)(ulonglong)uVar9;
          if (9 < uVar9) {
            uVar11 = 0x200000;
            goto joined_r0x0018a4fd;
          }
          uVar11 = (ulonglong)uVar9 + uVar11 * 10;
          lVar8 = lVar8 + 1;
        } while (lVar8 != (longlong)local_a8 + -uVar10);
        param_3 = (undefined **)0x0;
      }
    }
joined_r0x0018a4fd:
    if (plVar5 != (longlong *)0x0) {
      param_3 = (undefined **)0x1;
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
  }
  *(ulonglong *)PTR_MIN_0021a198 = uVar11 + 1;
LAB_0018a52c:
  (*(code *)PTR_new_0021a1a8)();
  plVar5 = (longlong *)(*(code *)PTR_new_0021a1b0)();
  if (param_5 == '\0') {
    (*(code *)PTR_run_spawn_hooks_0021a1b8)();
  }
  else {
    local_50 = 0;
    uStack_48 = 8;
    local_40 = 0;
    uStack_38 = 0;
  }
  local_b8 = (longlong *)0x1;
  uStack_b0 = (char *)0x1;
  lStack_a0 = 0;
  local_a8 = param_6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  plVar6 = (longlong *)(*(code *)PTR___rust_alloc_00219c88)();
  if (plVar6 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
  }
  else {
    plVar6[4] = CONCAT44(uStack_94,local_98);
    plVar6[5] = CONCAT44(uStack_8c,uStack_90);
    plVar6[2] = (longlong)local_a8;
    plVar6[3] = lStack_a0;
    *plVar6 = (longlong)local_b8;
    plVar6[1] = (longlong)uStack_b0;
    LOCK();
    lVar8 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    local_140 = plVar6;
    if (*plVar6 != 0 && SCARRY8(lVar8,1) == *plVar6 < 0) {
      local_128 = (longlong *)*param_7;
      uStack_120 = (undefined4 *)param_7[1];
      local_118 = (undefined **)param_7[2];
      uStack_110 = param_7[3];
      local_108 = (undefined4)param_7[4];
      uStack_104 = *(undefined4 *)((longlong)param_7 + 0x24);
      uStack_100 = (undefined4)param_7[5];
      uStack_fc = *(undefined4 *)((longlong)param_7 + 0x2c);
      local_f8 = (undefined4)param_7[6];
      uStack_f4 = *(undefined4 *)((longlong)param_7 + 0x34);
      uStack_f0 = (undefined4)param_7[7];
      uStack_ec = *(undefined4 *)((longlong)param_7 + 0x3c);
      local_d8 = (undefined4)local_40;
      uStack_d4 = local_40._4_4_;
      uStack_d0 = (undefined4)uStack_38;
      uStack_cc = uStack_38._4_4_;
      local_e8 = (undefined4)local_50;
      uStack_e4 = local_50._4_4_;
      uStack_e0 = (undefined4)uStack_48;
      uStack_dc = uStack_48._4_4_;
      local_c8 = plVar6;
      if (plVar6[2] != 0) {
        (*(code *)PTR_increment_num_running_threads_0021a1c0)();
      }
      local_58 = local_c8;
      local_68 = CONCAT44(uStack_d4,local_d8);
      uStack_60 = CONCAT44(uStack_cc,uStack_d0);
      local_78 = CONCAT44(uStack_e4,local_e8);
      uStack_70 = CONCAT44(uStack_dc,uStack_e0);
      local_88 = local_f8;
      uStack_84 = uStack_f4;
      uStack_80 = uStack_f0;
      uStack_7c = uStack_ec;
      local_98 = local_108;
      uStack_94 = uStack_104;
      uStack_90 = uStack_100;
      uStack_8c = uStack_fc;
      local_a8 = local_118;
      lStack_a0 = uStack_110;
      local_b8 = local_128;
      uStack_b0 = (char *)uStack_120;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
      if (puVar7 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_00219eb0)();
      }
      else {
        *(longlong **)(puVar7 + 0x18) = local_c8;
        *(ulonglong *)(puVar7 + 0x14) = CONCAT44(uStack_d4,local_d8);
        *(ulonglong *)(puVar7 + 0x16) = CONCAT44(uStack_cc,uStack_d0);
        *(ulonglong *)(puVar7 + 0x10) = CONCAT44(uStack_e4,local_e8);
        *(ulonglong *)(puVar7 + 0x12) = CONCAT44(uStack_dc,uStack_e0);
        puVar7[0xc] = local_f8;
        puVar7[0xd] = uStack_f4;
        puVar7[0xe] = uStack_f0;
        puVar7[0xf] = uStack_ec;
        puVar7[8] = local_108;
        puVar7[9] = uStack_104;
        puVar7[10] = uStack_100;
        puVar7[0xb] = uStack_fc;
        puVar7[4] = (undefined4)local_118;
        puVar7[5] = local_118._4_4_;
        puVar7[6] = (undefined4)uStack_110;
        puVar7[7] = uStack_110._4_4_;
        *puVar7 = (undefined4)local_128;
        puVar7[1] = local_128._4_4_;
        puVar7[2] = (undefined4)uStack_120;
        puVar7[3] = uStack_120._4_4_;
        LOCK();
        lVar8 = *plVar5;
        *plVar5 = *plVar5 + 1;
        UNLOCK();
        if (*plVar5 != 0 && SCARRY8(lVar8,1) == *plVar5 < 0) {
          local_a8 = &
                     PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_3_,()>::_closure_1_>_00215c80
          ;
          local_b8 = plVar5;
          uStack_b0 = (char *)puVar7;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
          puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined ***)(puVar7 + 4) = local_a8;
            *puVar7 = (int)local_b8;
            puVar7[1] = local_b8._4_4_;
            puVar7[2] = (undefined4)uStack_b0;
            puVar7[3] = uStack_b0._4_4_;
            lVar8 = (*(code *)PTR_new_0021a1c8)();
            if (lVar8 == 1) {
              param_1[1] = (longlong)param_3;
              *param_1 = 0;
              LOCK();
              *local_140 = *local_140 + -1;
              UNLOCK();
              if (*local_140 == 0) {
                <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
                ::drop_slow(&local_140,puVar7);
              }
              LOCK();
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              if (*plVar5 == 0) {
                (*(code *)PTR_drop_slow_00219e28)();
              }
            }
            else {
              *param_1 = (longlong)plVar5;
              param_1[1] = (longlong)local_140;
              param_1[2] = (longlong)param_3;
            }
            return param_1;
          }
          (*(code *)PTR_handle_alloc_error_00219eb0)();
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


