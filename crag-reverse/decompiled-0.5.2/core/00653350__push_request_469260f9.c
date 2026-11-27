// 00653350 push_request

/* <craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::push_request */

void __rustcall
<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::push_request
          (undefined1 *param_1,longlong *param_2,undefined2 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7,ulonglong param_8)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong *local_38;
  
  if (param_8 >> 0x20 == 0) {
    uVar7 = param_2[3];
    uVar6 = param_8 + 0x1f & 0x1fffffff8;
    if (uVar7 < uVar6) {
      uVar4 = 0x26;
    }
    else {
      local_50 = *param_2;
      uVar1 = *(ulonglong *)(local_50 + 0x40);
      uVar5 = uVar1 - *(longlong *)(local_50 + 0x80);
      if (uVar5 <= uVar7) {
        if (uVar7 - uVar5 < uVar6) {
          LOCK();
          *(longlong *)(local_50 + 0x160) = *(longlong *)(local_50 + 0x160) + 1;
          UNLOCK();
          uVar3 = 0;
        }
        else {
          local_5c = 0;
          local_70 = CONCAT44((int)param_4,CONCAT22(param_3,0xa602));
          local_60 = (undefined4)param_8;
          local_68 = param_5;
          local_64 = param_6;
          local_38 = param_2;
          local_5c = craggemini_core[66f3c71560d70857]::shm::crc32c_parts(&local_70,param_7,param_8)
          ;
          local_58 = uVar1;
          (*(code *)PTR_memcpy_00799008)();
          if (uVar7 - (uVar1 & uVar7 - 1) < 0x18) {
            (*(code *)PTR_memcpy_00799008)();
          }
          if ((param_8 != 0) &&
             (uVar1 = local_58 + 0x18, (*(code *)PTR_memcpy_00799008)(),
             uVar7 - (uVar1 & uVar7 - 1) < param_8)) {
            (*(code *)PTR_memcpy_00799008)();
          }
          uVar1 = local_58;
          uVar5 = uVar6 - (param_8 + 0x18);
          if (uVar5 != 0) {
            local_48 = 0;
            if (8 < uVar5) {
              (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s_src_shm_rs_00790808,8);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar7 = uVar7 - (param_8 + 0x18 + local_58 & uVar7 - 1);
            local_40 = uVar5;
            if (uVar7 < uVar5) {
              local_40 = uVar7;
            }
            (*(code *)PTR_memcpy_00799008)();
            if (uVar7 < uVar5) {
              (*(code *)PTR_memcpy_00799008)();
            }
          }
          *(ulonglong *)(local_50 + 0x40) = uVar1 + uVar6;
          LOCK();
          *(longlong *)(local_50 + 0x140) = *(longlong *)(local_50 + 0x140) + 1;
          UNLOCK();
          LOCK();
          *(longlong *)(local_50 + 0x150) = *(longlong *)(local_50 + 0x150) + param_8;
          UNLOCK();
          local_70 = 1;
          (*(code *)PTR_write_00799ef8)();
          uVar3 = 1;
        }
        param_1[1] = uVar3;
        uVar3 = 0;
        goto LAB_006533e5;
      }
      uVar4 = 0x1b;
    }
  }
  else {
    uVar4 = 0x22;
  }
  uVar4 = (*(code *)PTR_<&str>_007991e8)(param_4,uVar4);
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar3 = 1;
LAB_006533e5:
  *param_1 = uVar3;
  return;
}


