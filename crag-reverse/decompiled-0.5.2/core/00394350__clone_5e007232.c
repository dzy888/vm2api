// 00394350 clone

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (param_2[2] == 0) {
    *param_1 = 0;
    param_1[2] = 0;
    return param_1;
  }
  if (*param_2 == 0) {
    (*(code *)PTR_unwrap_failed_00799278)();
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined8 *)(*pcVar1)();
    return puVar2;
  }
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone::clone_subtree::
  <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
            (param_1,*param_2,param_2[1]);
  return param_1;
}


