// 004d0a40 stage_slot_agy_home

/* craggemini_core[66f3c71560d70857]::pool::stage_slot_agy_home */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::pool::stage_slot_agy_home
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  longlong lVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_38;
  
  puVar1 = PTR__join_00799210;
  (*(code *)PTR__join_00799210)(&DAT_0018e0a8,param_5,4);
  (*(code *)puVar1)(".gemini",local_78,7);
  (*(code *)PTR__join_00799210)("config",local_50,6);
  (*(code *)PTR__join_00799210)("antigravity-cli",local_50,0xf);
  (*(code *)PTR__join_00799210)(".config",local_78,7);
  (*(code *)PTR__join_00799210)(".cache",local_78,6);
  lVar2 = binding::ensure_private_dir(CONCAT44(uStack_7c,uStack_80),local_78);
  uVar3 = extraout_XMM0_Da;
  if ((((lVar2 == 0) &&
       (lVar2 = binding::ensure_private_dir(local_58,local_50), uVar3 = extraout_XMM0_Da_00,
       lVar2 == 0)) &&
      (lVar2 = binding::ensure_private_dir(local_e0,local_d8), uVar3 = extraout_XMM0_Da_01,
      lVar2 == 0)) &&
     (((lVar2 = binding::ensure_private_dir(local_c8), uVar3 = extraout_XMM0_Da_02, lVar2 == 0 &&
       (lVar2 = binding::ensure_private_dir(local_b0,local_a8), uVar3 = extraout_XMM0_Da_03,
       lVar2 == 0)) &&
      (lVar2 = binding::ensure_private_dir(local_98,local_90), uVar3 = extraout_XMM0_Da_04,
      lVar2 == 0)))) {
    (*(code *)PTR__join_00799210)(".gemini",param_3,7);
    uVar3 = (*(code *)PTR__join_00799210)("antigravity-cli",local_128,0xf);
    if (local_138 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
    }
    (*(code *)PTR__join_00799210)("antigravity-oauth-token",local_38,0x17);
    (*(code *)PTR__join_00799210)("antigravity-oauth-token",local_c0,0x17);
    lVar2 = copy_private_regular_file(local_110,local_108,local_130,local_128,0);
    uVar3 = extraout_XMM0_Da_05;
    if (lVar2 == 0) {
      if (local_138 != 0) {
        uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_05,1);
      }
      if (local_118 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
      }
      (*(code *)PTR__join_00799210)("settings.json",local_38,0xd);
      (*(code *)PTR__join_00799210)("settings.json",local_c0,0xd);
      lVar2 = copy_private_regular_file(local_110,local_108,local_130,local_128,0);
      uVar3 = extraout_XMM0_Da_06;
      if (lVar2 == 0) {
        if (local_138 != 0) {
          uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_06,1);
        }
        if (local_118 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
        }
        (*(code *)PTR__join_00799210)("installation_id",local_38,0xf);
        (*(code *)PTR__join_00799210)("installation_id",local_c0,0xf);
        lVar2 = copy_private_regular_file(local_110,local_108,local_130,local_128,0);
        uVar3 = extraout_XMM0_Da_07;
        if (lVar2 == 0) {
          if (local_138 != 0) {
            uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_07,1);
          }
          if (local_118 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
          }
          (*(code *)PTR__join_00799210)("cache/default_project_id.txt",local_38,0x1c);
          (*(code *)PTR__join_00799210)("cache/default_project_id.txt",local_c0,0x1c);
          lVar2 = copy_private_regular_file(local_110,local_108,local_130,local_128,0);
          uVar3 = extraout_XMM0_Da_08;
          if (lVar2 == 0) {
            if (local_138 != 0) {
              uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_08,1);
            }
            if (local_118 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
            }
            (*(code *)PTR__join_00799210)("oauth_creds.json",local_38,0x10);
            (*(code *)PTR__join_00799210)("oauth_creds.json",local_c0,0x10);
            lVar2 = copy_private_regular_file(local_110,local_108,local_130,local_128,0);
            uVar3 = extraout_XMM0_Da_09;
            if (lVar2 == 0) {
              if (local_138 != 0) {
                uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_09,1);
              }
              if (local_118 != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
              }
              (*(code *)PTR__join_00799210)("google_accounts.json",local_38,0x14);
              (*(code *)PTR__join_00799210)("google_accounts.json",local_c0,0x14);
              lVar2 = copy_private_regular_file(local_110,local_108,local_130,local_128,0);
              uVar3 = extraout_XMM0_Da_10;
              if (lVar2 == 0) {
                if (local_138 != 0) {
                  uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_10,1);
                }
                if (local_118 != 0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
                }
                param_1[2] = local_78;
                *(undefined4 *)param_1 = local_88;
                *(undefined4 *)((longlong)param_1 + 4) = uStack_84;
                *(undefined4 *)(param_1 + 1) = uStack_80;
                *(undefined4 *)((longlong)param_1 + 0xc) = uStack_7c;
                if (local_48 != 0) {
                  local_88 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
                }
                if (local_a0 != 0) {
                  local_88 = (*(code *)PTR___rust_dealloc_00798fc8)(local_88,1);
                }
                if (local_b8 != 0) {
                  local_88 = (*(code *)PTR___rust_dealloc_00798fc8)(local_88,1);
                }
                if (local_d0 != 0) {
                  local_88 = (*(code *)PTR___rust_dealloc_00798fc8)(local_88,1);
                }
                if (local_e8 != 0) {
                  local_88 = (*(code *)PTR___rust_dealloc_00798fc8)(local_88,1);
                }
                goto joined_r0x004d0c9a;
              }
            }
          }
        }
      }
    }
    param_1[1] = lVar2;
    *param_1 = 0xffffffffffffffff;
    if (local_138 != 0) {
      uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (local_118 != 0) {
      uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
    }
    if (local_48 != 0) {
      uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
    }
  }
  else {
    param_1[1] = lVar2;
    *param_1 = 0xffffffffffffffff;
  }
  if (local_a0 != 0) {
    uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
  }
  if (local_b8 != 0) {
    uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
  }
  if (local_d0 != 0) {
    uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
  }
  if (local_e8 != 0) {
    uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
  }
  if (local_60 != 0) {
    uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
  }
  local_60 = CONCAT44(uStack_84,local_88);
  local_88 = uVar3;
joined_r0x004d0c9a:
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(local_88,1);
  }
  return param_1;
}


