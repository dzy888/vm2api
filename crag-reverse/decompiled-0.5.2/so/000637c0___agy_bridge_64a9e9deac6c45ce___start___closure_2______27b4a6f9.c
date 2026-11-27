// 000637c0 <agy_bridge[64a9e9deac6c45ce]::start::{closure#2},()>

/* <std[6c98fd8553dbae28]::thread::builder::Builder>::spawn_unchecked::<agy_bridge[64a9e9deac6c45ce]::start::{closure#2},
   ()> */

void __rustcall
<std[6c98fd8553dbae28]::thread::builder::Builder>::spawn_unchecked::
<agy_bridge[64a9e9deac6c45ce]::start::_closure_2_,()>(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong in_RDX;
  char *in_RSI;
  undefined8 *in_RDI;
  ulonglong uVar14;
  ulonglong uVar15;
  int local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar4 = PTR_MIN_000c3e10;
  local_38 = *(undefined8 *)(in_RSI + 0x20);
  local_48 = *(undefined4 *)(in_RSI + 0x10);
  uStack_44 = *(undefined4 *)(in_RSI + 0x14);
  uStack_40 = *(undefined4 *)(in_RSI + 0x18);
  uStack_3c = *(undefined4 *)(in_RSI + 0x1c);
  cVar1 = in_RSI[0x28];
  if ((*in_RSI != '\0') || (*(longlong *)PTR_MIN_000c3e10 != 0)) goto LAB_00063962;
  in_RDX = 0xe;
  (*(code *)PTR_getenv_000c3b40)();
  lVar12 = CONCAT44(uStack_94,local_98);
  if (lVar12 == -1) {
    uVar15 = 0x200000;
  }
  else {
    in_RDX = CONCAT44(uStack_84,local_88);
    (*(code *)PTR_from_utf8_000c3bd8)();
    if ((local_d8 == 1) || (local_c8 == 0)) {
LAB_00063927:
      uVar15 = 0x200000;
    }
    else {
      if (local_c8 == 1) {
        cVar5 = *uStack_d0;
        if ((cVar5 == '+') || (cVar5 == '-')) goto LAB_00063927;
      }
      else {
        cVar5 = *uStack_d0;
      }
      uVar14 = (ulonglong)(cVar5 == '+');
      in_RDX = local_c8 - uVar14;
      if (0x10 < in_RDX) {
        uVar15 = 0;
        lVar6 = 0;
        while( true ) {
          if (lVar6 == local_c8 + -uVar14) goto joined_r0x0006393a;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar15;
          in_RDX = SUB168(auVar2 * ZEXT816(10),8);
          uVar7 = SUB168(auVar2 * ZEXT816(10),0);
          if (in_RDX != 0) break;
          in_RDX = (ulonglong)((byte)uStack_d0[lVar6 + uVar14] - 0x30);
          uVar15 = uVar7 + in_RDX;
          if ((9 < (byte)uStack_d0[lVar6 + uVar14] - 0x30) ||
             (lVar6 = lVar6 + 1, CARRY8(uVar7,in_RDX))) break;
        }
        goto LAB_00063927;
      }
      if (in_RDX == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        lVar6 = 0;
        do {
          uVar13 = (byte)uStack_d0[lVar6 + uVar14] - 0x30;
          in_RDX = (ulonglong)uVar13;
          if (9 < uVar13) {
            uVar15 = 0x200000;
            goto joined_r0x0006393a;
          }
          uVar15 = (ulonglong)uVar13 + uVar15 * 10;
          lVar6 = lVar6 + 1;
        } while (lVar6 != local_c8 + -uVar14);
        in_RDX = 0;
      }
    }
joined_r0x0006393a:
    if (lVar12 != 0) {
      in_RDX = 1;
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
  }
  *(ulonglong *)puVar4 = uVar15 + 1;
LAB_00063962:
  (*(code *)PTR_new_000c3e18)();
  plVar8 = (longlong *)(*(code *)PTR_new_000c3e20)();
  if (cVar1 == '\0') {
    (*(code *)PTR_run_spawn_hooks_000c3e28)();
  }
  else {
    local_68 = 0;
    uStack_60 = 8;
    local_58 = 0;
    uStack_50 = 0;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  plVar9 = (longlong *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (plVar9 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
  }
  else {
    *(undefined4 *)(plVar9 + 4) = local_b8;
    *(undefined4 *)((longlong)plVar9 + 0x24) = uStack_b4;
    *(undefined4 *)(plVar9 + 5) = uStack_b0;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = uStack_ac;
    plVar9[2] = 0;
    plVar9[3] = 0;
    *plVar9 = 1;
    plVar9[1] = 1;
    LOCK();
    lVar12 = *plVar9;
    *plVar9 = *plVar9 + 1;
    UNLOCK();
    local_a0 = plVar9;
    if (*plVar9 != 0 && SCARRY8(lVar12,1) == *plVar9 < 0) {
      local_88 = (undefined4)local_58;
      uStack_84 = local_58._4_4_;
      uStack_80 = (undefined4)uStack_50;
      uStack_7c = uStack_50._4_4_;
      local_98 = (undefined4)local_68;
      uStack_94 = local_68._4_4_;
      uStack_90 = (undefined4)uStack_60;
      uStack_8c = uStack_60._4_4_;
      local_78 = plVar9;
      if (plVar9[2] != 0) {
        (*(code *)PTR_increment_num_running_threads_000c3e30)();
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      puVar10 = (undefined4 *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (puVar10 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_000c3d10)();
      }
      else {
        *(longlong **)(puVar10 + 8) = local_78;
        puVar10[4] = local_88;
        puVar10[5] = uStack_84;
        puVar10[6] = uStack_80;
        puVar10[7] = uStack_7c;
        *puVar10 = local_98;
        puVar10[1] = uStack_94;
        puVar10[2] = uStack_90;
        puVar10[3] = uStack_8c;
        LOCK();
        lVar12 = *plVar8;
        *plVar8 = *plVar8 + 1;
        UNLOCK();
        if (*plVar8 != 0 && SCARRY8(lVar12,1) == *plVar8 < 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_000c3a90)();
          if (puVar11 != (undefined4 *)0x0) {
            *(undefined ***)(puVar11 + 4) =
                 &
                 PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<agy_bridge[64a9e9deac6c45ce]::start::_closure_2_,()>::_closure_1_>_000c0420
            ;
            local_d8 = (int)plVar8;
            uStack_d4 = (undefined4)((ulonglong)plVar8 >> 0x20);
            uStack_d0._0_4_ = SUB84(puVar10,0);
            uStack_d0._4_4_ = (undefined4)((ulonglong)puVar10 >> 0x20);
            *puVar11 = local_d8;
            puVar11[1] = uStack_d4;
            puVar11[2] = (undefined4)uStack_d0;
            puVar11[3] = uStack_d0._4_4_;
            lVar12 = (*(code *)PTR_new_000c3e38)();
            if (lVar12 == 1) {
              LOCK();
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
                ::drop_slow(&local_a0,puVar11);
              }
              LOCK();
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (*plVar8 == 0) {
                (*(code *)PTR_drop_slow_000c3af0)();
              }
              in_RDI[1] = in_RDX;
              *in_RDI = 0;
            }
            else {
              *in_RDI = plVar8;
              in_RDI[1] = plVar9;
              in_RDI[2] = in_RDX;
            }
            return;
          }
          (*(code *)PTR_handle_alloc_error_000c3d10)();
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


