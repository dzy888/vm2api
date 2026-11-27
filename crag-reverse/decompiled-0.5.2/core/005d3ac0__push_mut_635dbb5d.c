// 005d3ac0 push_mut

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::InlineMedia>>::push_mut
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::InlineMedia>>::push_mut
          (longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = param_1[2];
  if (lVar2 == *param_1) {
    <alloc[12e961f32105355]::raw_vec::RawVec<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)>>
    ::grow_one(param_1);
  }
  lVar3 = param_1[1];
  *(undefined8 *)(lVar3 + 0x40 + lVar2 * 0x48) = param_2[8];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[7];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar2 * 0x48);
  *puVar1 = param_2[6];
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar2 * 0x48);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar2 * 0x48);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar3 + lVar2 * 0x48);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  param_1[2] = lVar2 + 1;
  return;
}


