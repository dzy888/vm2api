// 00060930 push_response_nobell

/* <agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>::push_response_nobell */

undefined2 * __rustcall
<agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>::push_response_nobell
          (undefined2 *param_1,longlong *param_2,undefined2 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7,ulonglong param_8)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  if (param_8 >> 0x20 == 0) {
    uVar7 = param_2[5];
    uVar6 = param_8 + 0x1f & 0x1fffffff8;
    if (uVar7 < uVar6) {
      uVar4 = 0x26;
    }
    else {
      local_48 = *param_2;
      uVar1 = *(ulonglong *)(local_48 + 0xc0);
      uVar5 = uVar1 - *(longlong *)(local_48 + 0x100);
      if (uVar5 <= uVar7) {
        if (uVar7 - uVar5 < uVar6) {
          LOCK();
          *(longlong *)(local_48 + 0x160) = *(longlong *)(local_48 + 0x160) + 1;
          UNLOCK();
          *param_1 = 0;
          return param_1;
        }
        local_54 = 0;
        local_68 = 0xa602;
        local_64 = (undefined4)param_4;
        local_58 = (undefined4)param_8;
        local_66 = param_3;
        local_60 = param_5;
        local_5c = param_6;
        local_54 = agy_bridge[64a9e9deac6c45ce]::shm::crc32c_parts(&local_68,param_7,param_8);
        local_50 = uVar1;
        (*(code *)PTR_memcpy_000c3aa8)();
        if (uVar7 - (uVar1 & uVar7 - 1) < 0x18) {
          (*(code *)PTR_memcpy_000c3aa8)();
        }
        if ((param_8 != 0) &&
           (uVar1 = local_50 + 0x18, (*(code *)PTR_memcpy_000c3aa8)(),
           uVar7 - (uVar1 & uVar7 - 1) < param_8)) {
          (*(code *)PTR_memcpy_000c3aa8)();
        }
        uVar1 = local_50;
        uVar5 = uVar6 - (param_8 + 0x18);
        if (uVar5 != 0) {
          local_40 = 0;
          if (8 < uVar5) {
            (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s_adapter____src_shm_rs_000c0360,8);
            pcVar2 = (code *)swi(3);
            puVar3 = (undefined2 *)(*pcVar2)();
            return puVar3;
          }
          uVar7 = uVar7 - (param_8 + 0x18 + local_50 & uVar7 - 1);
          local_38 = uVar5;
          if (uVar7 < uVar5) {
            local_38 = uVar7;
          }
          (*(code *)PTR_memcpy_000c3aa8)();
          if (uVar7 < uVar5) {
            (*(code *)PTR_memcpy_000c3aa8)();
          }
        }
        *(ulonglong *)(local_48 + 0xc0) = uVar1 + uVar6;
        LOCK();
        *(longlong *)(local_48 + 0x148) = *(longlong *)(local_48 + 0x148) + 1;
        UNLOCK();
        LOCK();
        *(longlong *)(local_48 + 0x158) = *(longlong *)(local_48 + 0x158) + param_8;
        UNLOCK();
        *param_1 = 0x100;
        return param_1;
      }
      uVar4 = 0x1b;
    }
  }
  else {
    uVar4 = 0x22;
  }
  uVar4 = (*(code *)PTR_<&str>_000c3b30)(param_4,uVar4);
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined1 *)param_1 = 1;
  return param_1;
}


