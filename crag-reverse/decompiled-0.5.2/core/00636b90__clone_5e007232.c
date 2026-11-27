// 00636b90 clone

/* <craggemini_core[66f3c71560d70857]::protocol::Failure as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure_as_core[c0acaeba6ab4c2e0]::clone::Clone>::
clone(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined2 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  undefined2 local_214;
  undefined2 local_212;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  char local_1a8;
  undefined1 uStack_1a7;
  undefined4 uStack_1a6;
  undefined2 uStack_1a2;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar8 = (undefined2)param_2[7];
  lVar4 = param_2[1];
  plVar5 = (longlong *)param_2[2];
  if (*param_2 == -1) {
LAB_00636bd1:
    lVar10 = param_2[3];
    lVar12 = param_2[5];
    local_214 = uVar8;
    local_130 = plVar5;
    lVar9 = lVar4;
    lVar13 = param_2[4];
    plVar5 = (longlong *)0xffffffffffffffff;
    lVar4 = local_1c0;
  }
  else {
    if ((longlong)plVar5 < 0) {
LAB_00636bc5:
      uVar8 = (*(code *)PTR_handle_error_00798ff0)();
      param_2 = plVar5;
      goto LAB_00636bd1;
    }
    local_214 = uVar8;
    if (plVar5 == (longlong *)0x0) {
      lVar10 = param_2[3];
      lVar12 = param_2[5];
      local_130 = plVar5;
      lVar9 = 1;
      lVar13 = param_2[4];
      plVar5 = (longlong *)0x0;
      lVar4 = local_1c0;
    }
    else {
      local_130 = plVar5;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar9 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar9 == 0) goto LAB_00636bc5;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,plVar5);
      lVar10 = param_2[3];
      lVar12 = param_2[5];
      lVar13 = param_2[4];
      lVar4 = local_1c0;
    }
  }
  local_1c0 = lVar13;
  lVar13 = -1;
  if (lVar10 != -1) {
    if (lVar12 < 0) {
LAB_00636c8b:
      local_1c0 = lVar4;
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00637644;
    }
    if (lVar12 == 0) {
      local_1c0 = 1;
      lVar13 = 0;
    }
    else {
      local_1b8 = param_2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar10 = (*(code *)PTR___rust_alloc_00799000)();
      lVar4 = local_1c0;
      if (lVar10 == 0) goto LAB_00636c8b;
      (*(code *)PTR_memcpy_00799008)(lVar12,lVar12);
      param_2 = local_1b8;
      lVar13 = lVar12;
      local_1c0 = lVar10;
    }
  }
  local_215 = *(undefined1 *)((longlong)param_2 + 0x3b);
  local_1b8 = (longlong *)CONCAT71(local_1b8._1_7_,*(undefined1 *)((longlong)param_2 + 0x3a));
  puVar6 = (undefined8 *)param_2[6];
  local_1b0 = lVar9;
  if (puVar6 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    goto LAB_006375d0;
  }
  local_a8 = lVar12;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar11 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    goto LAB_00637644;
  }
  uVar8 = *(undefined2 *)(puVar6 + 0x2e);
  local_212 = *(undefined2 *)((longlong)puVar6 + 0x172);
  local_138 = lVar13;
  if (puVar6[2] == -1) {
    local_a0 = 0xffffffffffffffff;
    if (puVar6[5] != -1) goto LAB_00636daa;
LAB_00636e7f:
    local_1c8 = -1;
    local_1f0 = -1;
    if (puVar6[8] != -1) goto LAB_00636de5;
LAB_00636e93:
    if (puVar6[0xb] != -1) goto LAB_00636e25;
LAB_00636ea3:
    local_1d0 = -1;
    local_1f8 = -1;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    if (puVar6[5] == -1) goto LAB_00636e7f;
LAB_00636daa:
    local_1c8 = -1;
    (*(code *)PTR_clone_00798fd0)();
    local_1f0 = local_238;
    local_140 = uStack_230;
    local_c0 = local_228;
    if (puVar6[8] == -1) goto LAB_00636e93;
LAB_00636de5:
    (*(code *)PTR_clone_00798fd0)();
    local_1c8 = local_238;
    local_148 = uStack_230;
    local_c8 = local_228;
    if (puVar6[0xb] == -1) goto LAB_00636ea3;
LAB_00636e25:
    local_1d0 = -1;
    (*(code *)PTR_clone_00798fd0)();
    local_1f8 = local_238;
    local_150 = uStack_230;
    local_d0 = local_228;
  }
  local_b0 = *puVar6;
  local_b8 = puVar6[1];
  if (puVar6[0xe] == -1) {
    if (puVar6[0x11] != -1) goto LAB_00636f15;
LAB_006370bb:
    local_1d8 = -1;
    local_200 = -1;
    if (puVar6[0x14] != -1) goto LAB_00636f56;
LAB_006370d2:
    if (puVar6[0x17] != -1) goto LAB_00636fa0;
LAB_006370e9:
    local_1e0 = -1;
    local_208 = -1;
    if (puVar6[0x1a] != -1) goto LAB_00636fe1;
LAB_00637100:
    if (puVar6[0x1d] != -1) goto LAB_0063702b;
LAB_00637117:
    local_1e8 = -1;
    local_210 = -1;
    lVar4 = puVar6[0x20];
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    local_1d0 = local_238;
    local_158 = uStack_230;
    local_d8 = local_228;
    if (puVar6[0x11] == -1) goto LAB_006370bb;
LAB_00636f15:
    local_1d8 = -1;
    (*(code *)PTR_clone_00798fd0)();
    local_200 = local_238;
    local_160 = uStack_230;
    local_e0 = local_228;
    if (puVar6[0x14] == -1) goto LAB_006370d2;
LAB_00636f56:
    (*(code *)PTR_clone_00798fd0)();
    local_1d8 = local_238;
    local_168 = uStack_230;
    local_e8 = local_228;
    if (puVar6[0x17] == -1) goto LAB_006370e9;
LAB_00636fa0:
    local_1e0 = -1;
    (*(code *)PTR_clone_00798fd0)();
    local_208 = local_238;
    local_170 = uStack_230;
    local_f0 = local_228;
    if (puVar6[0x1a] == -1) goto LAB_00637100;
LAB_00636fe1:
    (*(code *)PTR_clone_00798fd0)();
    local_1e0 = local_238;
    local_178 = uStack_230;
    local_f8 = local_228;
    if (puVar6[0x1d] == -1) goto LAB_00637117;
LAB_0063702b:
    local_1e8 = -1;
    (*(code *)PTR_clone_00798fd0)();
    lVar4 = puVar6[0x20];
    local_210 = local_238;
    local_180 = uStack_230;
    local_100 = local_228;
  }
  if (lVar4 != -1) {
    (*(code *)PTR_clone_00798fd0)();
    local_1e8 = local_238;
    local_188 = uStack_230;
    local_108 = local_228;
  }
  local_216 = *(undefined1 *)((longlong)puVar6 + 0x174);
  local_217 = *(undefined1 *)((longlong)puVar6 + 0x175);
  local_218 = *(undefined1 *)((longlong)puVar6 + 0x176);
  if (puVar6[0x23] == -1) {
    local_128 = -1;
    cVar1 = *(char *)(puVar6 + 0x2a);
    if (cVar1 != -1) goto LAB_00637199;
LAB_006371d9:
    local_1a8 = -1;
    if (puVar6[0x26] != -1) goto LAB_006372ee;
LAB_006371f7:
    local_238 = -1;
    lVar13 = local_138;
  }
  else {
    <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::to_vec::
    <alloc[12e961f32105355]::alloc::Global>(&local_238,puVar6[0x24],puVar6[0x25]);
    local_118 = local_228;
    local_128 = local_238;
    uStack_120 = (undefined4)uStack_230;
    uStack_11c = uStack_230._4_4_;
    cVar1 = *(char *)(puVar6 + 0x2a);
    if (cVar1 == -1) goto LAB_006371d9;
LAB_00637199:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar1) {
    case '\x01':
      local_238 = (ulonglong)CONCAT61(local_238._2_6_,*(undefined1 *)((longlong)puVar6 + 0x151)) <<
                  8;
      break;
    case '\x02':
      uStack_230 = puVar6[0x2b];
      local_228 = puVar6[0x2c];
      break;
    case '\x03':
      (*(code *)PTR_clone_00798fd0)();
      break;
    case '\x04':
      <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::to_vec::
      <alloc[12e961f32105355]::alloc::Global>(&uStack_230,puVar6[0x2c],puVar6[0x2d]);
      break;
    case '\x05':
      if (puVar6[0x2d] == 0) {
        uStack_230 = 0;
        uStack_220 = 0;
      }
      else {
        if (puVar6[0x2b] == 0) {
          (*(code *)PTR_unwrap_failed_00799278)();
LAB_00637644:
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
        ::clone::clone_subtree::
        <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                  (&uStack_230,puVar6[0x2b],puVar6[0x2c]);
      }
    }
    lVar9 = local_238;
    local_238 = CONCAT71(local_238._1_7_,cVar1);
    lVar4 = local_238;
    local_198 = local_228;
    uStack_190 = uStack_220;
    local_238._1_1_ = SUB81(lVar9,1);
    uStack_1a7 = local_238._1_1_;
    local_238._2_4_ = SUB84(lVar9,2);
    uStack_1a6 = local_238._2_4_;
    local_238._6_2_ = SUB82(lVar9,6);
    uStack_1a2 = local_238._6_2_;
    uStack_1a0 = uStack_230;
    local_238 = lVar4;
    local_1a8 = cVar1;
    if (puVar6[0x26] == -1) goto LAB_006371f7;
LAB_006372ee:
    lVar13 = local_138;
    (*(code *)PTR_clone_00798fd0)();
    local_48 = uStack_230;
    uStack_40 = local_228;
  }
  uVar2 = *(undefined4 *)(puVar6 + 0x29);
  uVar3 = *(undefined4 *)((longlong)puVar6 + 0x14c);
  *puVar11 = local_b0;
  puVar11[1] = local_b8;
  puVar11[4] = local_90;
  puVar11[2] = local_a0;
  puVar11[3] = uStack_98;
  puVar11[5] = local_1f0;
  puVar11[6] = local_140;
  puVar11[7] = local_c0;
  puVar11[8] = local_1c8;
  puVar11[9] = local_148;
  puVar11[10] = local_c8;
  puVar11[0xb] = local_1f8;
  puVar11[0xc] = local_150;
  puVar11[0xd] = local_d0;
  puVar11[0xe] = local_1d0;
  puVar11[0xf] = local_158;
  puVar11[0x10] = local_d8;
  puVar11[0x11] = local_200;
  puVar11[0x12] = local_160;
  puVar11[0x13] = local_e0;
  puVar11[0x14] = local_1d8;
  puVar11[0x15] = local_168;
  puVar11[0x16] = local_e8;
  puVar11[0x17] = local_208;
  puVar11[0x18] = local_170;
  puVar11[0x19] = local_f0;
  puVar11[0x1a] = local_1e0;
  puVar11[0x1b] = local_178;
  puVar11[0x1c] = local_f8;
  puVar11[0x1d] = local_210;
  puVar11[0x1e] = local_180;
  puVar11[0x1f] = local_100;
  puVar11[0x20] = local_1e8;
  puVar11[0x21] = local_188;
  puVar11[0x22] = local_108;
  puVar11[0x25] = local_118;
  puVar11[0x23] = local_128;
  puVar11[0x24] = CONCAT44(uStack_11c,uStack_120);
  puVar11[0x26] = local_238;
  puVar11[0x27] = local_48;
  puVar11[0x28] = uStack_40;
  *(undefined4 *)(puVar11 + 0x29) = uVar2;
  *(undefined4 *)((longlong)puVar11 + 0x14c) = uVar3;
  puVar11[0x2a] = CONCAT26(uStack_1a2,CONCAT42(uStack_1a6,CONCAT11(uStack_1a7,local_1a8)));
  puVar11[0x2b] = uStack_1a0;
  puVar11[0x2c] = local_198;
  puVar11[0x2d] = uStack_190;
  *(undefined2 *)(puVar11 + 0x2e) = uVar8;
  *(undefined2 *)((longlong)puVar11 + 0x172) = local_212;
  *(undefined1 *)((longlong)puVar11 + 0x174) = local_216;
  *(undefined1 *)((longlong)puVar11 + 0x175) = local_217;
  *(undefined1 *)((longlong)puVar11 + 0x176) = local_218;
  lVar12 = local_a8;
LAB_006375d0:
  *(undefined2 *)(param_1 + 7) = local_214;
  *param_1 = plVar5;
  param_1[1] = local_1b0;
  param_1[2] = local_130;
  param_1[3] = lVar13;
  param_1[4] = local_1c0;
  param_1[5] = lVar12;
  *(undefined1 *)((longlong)param_1 + 0x3b) = local_215;
  *(undefined1 *)((longlong)param_1 + 0x3a) = local_1b8._0_1_;
  param_1[6] = puVar11;
  return;
}


