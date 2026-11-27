// 0049f210 <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value), <[(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}> */

longlong * __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
          (longlong *param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
          undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    param_1 = (longlong *)
              <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                        (param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe);
    param_2 = (longlong *)
              <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                        (param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4,param_5);
    param_3 = (longlong *)
              <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                        (param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4,param_5);
  }
  puVar3 = PTR_memcmp_00799528;
  uVar6 = *(ulonglong *)(*param_1 + 0x10);
  uVar1 = *(ulonglong *)(*param_2 + 0x10);
  uVar5 = uVar1;
  if (uVar6 < uVar1) {
    uVar5 = uVar6;
  }
  iVar4 = (*(code *)PTR_memcmp_00799528)(*param_2,uVar5);
  uVar5 = uVar6 - uVar1;
  if (iVar4 != 0) {
    uVar5 = (longlong)iVar4;
  }
  uVar2 = *(ulonglong *)(*param_3 + 0x10);
  uVar7 = uVar6;
  if (uVar2 <= uVar6) {
    uVar7 = uVar2;
  }
  iVar4 = (*(code *)puVar3)(puVar3,uVar7);
  uVar6 = uVar6 - uVar2;
  if (iVar4 != 0) {
    uVar6 = (longlong)iVar4;
  }
  if (-1 < (longlong)(uVar6 ^ uVar5)) {
    uVar6 = uVar2;
    if (uVar1 < uVar2) {
      uVar6 = uVar1;
    }
    iVar4 = (*(code *)PTR_memcmp_00799528)(param_1,uVar6);
    uVar6 = uVar1 - uVar2;
    if (iVar4 != 0) {
      uVar6 = (longlong)iVar4;
    }
    param_1 = param_2;
    if ((longlong)(uVar6 ^ uVar5) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}


