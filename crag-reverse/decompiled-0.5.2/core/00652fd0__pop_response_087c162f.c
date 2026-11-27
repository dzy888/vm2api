// 00652fd0 pop_response

/* <craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::pop_response */

ulonglong * __rustcall
<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::pop_response
          (undefined8 param_1,ulonglong *param_2,longlong *param_3,undefined8 param_4,
          undefined2 param_5)

{
  longlong lVar1;
  undefined4 in_EAX;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  short local_a8;
  short sStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int local_84;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_48._0_4_ = (undefined4)param_1;
  lVar1 = *param_3;
  uVar3 = param_3[5];
  uVar4 = *(ulonglong *)(lVar1 + 0x100);
  uVar8 = *(ulonglong *)(lVar1 + 0xc0) - uVar4;
  if (*(ulonglong *)(lVar1 + 0xc0) == uVar4) {
    uVar9 = 0xffffffffffffffff;
    uVar4 = 0;
LAB_00653009:
    *param_2 = uVar9;
    param_2[1] = uVar4;
    param_2[2] = uVar9;
    param_2[3] = CONCAT44(local_48._4_4_,(undefined4)local_48);
    *(undefined4 *)(param_2 + 4) = in_EAX;
    *(undefined2 *)((longlong)param_2 + 0x24) = param_5;
    return param_2;
  }
  if (0x17 < uVar8 && uVar8 <= uVar3) {
    local_a8 = 0;
    sStack_a6 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_98 = 0;
    local_50 = uVar4 & uVar3 - 1;
    uVar7 = uVar3 - local_50;
    uVar9 = 0x18;
    if (uVar7 < 0x18) {
      uVar9 = uVar7;
    }
    local_60 = param_3[4] + lVar1 + local_50;
    local_80 = uVar3;
    local_78 = uVar4;
    local_58 = param_3;
    local_48._0_4_ = (*(code *)PTR_memcpy_00799008)(uVar8 <= uVar3,uVar9);
    local_70 = uVar7;
    if (uVar7 < 0x18) {
      local_48._0_4_ = (*(code *)PTR_memcpy_00799008)((undefined4)local_48,0x18 - uVar9);
    }
    in_EAX = uStack_9c;
    if (local_a8 == -0x59fe) {
      uVar5 = sStack_a6 - 1;
      if ((uVar5 < 0xf & (byte)(0x7e07 >> ((byte)uVar5 & 0x1f))) == 0) {
        uVar6 = 0x17;
      }
      else {
        uVar9 = local_98 & 0xffffffff;
        uVar7 = uVar9 + 0x1f & 0xfffffffffffffff8;
        if (uVar7 <= uVar8) {
          local_48 = CONCAT44(uStack_a0,uStack_a4);
          uStack_40 = 0;
          local_84 = local_98._4_4_;
          param_5 = *(undefined2 *)(&DAT_001a41c4 + (ulonglong)uVar5 * 2);
          if (uVar9 == 0) {
            uVar4 = 1;
            uVar8 = local_80;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            uVar4 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
            uVar8 = local_80;
            if (uVar4 == 0) {
              uVar10 = (*(code *)PTR_handle_error_00798ff0)();
              if (uVar9 != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
              }
                    /* WARNING: Subroutine does not return */
              _Unwind_Resume();
            }
            uVar3 = local_80 - (local_78 + 0x18 & uVar3 - 1);
            local_68 = uVar9;
            if (uVar3 < uVar9) {
              local_68 = uVar3;
            }
            uVar10 = (*(code *)PTR_memcpy_00799008)();
            if (uVar3 < uVar9) {
              (*(code *)PTR_memcpy_00799008)(uVar10,uVar9 - local_68);
            }
            else {
            }
          }
          uVar3 = uVar7;
          if (local_70 < uVar7) {
            uVar3 = local_70;
          }
          if (uVar8 != local_50) {
            (*(code *)PTR_memset_00799090)(uVar3,uVar3);
          }
          if (local_70 < uVar7) {
            (*(code *)PTR_memset_00799090)(uVar3,uVar7 - uVar3);
          }
          *(ulonglong *)(lVar1 + 0x100) = uVar7 + local_78;
          iVar2 = craggemini_core[66f3c71560d70857]::shm::crc32c_parts(&local_a8,uVar4,uVar9);
          if (iVar2 == local_84) {
            LOCK();
            UNLOCK();
            if (*(int *)(lVar1 + 0x184) != 0) {
              local_a8 = 1;
              sStack_a6 = 0;
              uStack_a4 = 0;
              (*(code *)PTR_write_00799ef8)(*(int *)(lVar1 + 0x184),8);
            }
            goto LAB_00653009;
          }
          uVar3 = (*(code *)PTR_<&str>_007991e8)(extraout_XMM0_Da,0x28);
          if (uVar9 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_00,1);
          }
          goto LAB_00653139;
        }
        uVar6 = 0x23;
      }
    }
    else {
      uVar6 = 0x19;
    }
  }
  else {
    uVar6 = 0x26;
  }
  uVar3 = (*(code *)PTR_<&str>_007991e8)((undefined4)local_48,uVar6);
LAB_00653139:
  param_2[1] = uVar3;
  *param_2 = 0xfffffffffffffffe;
  return param_2;
}


