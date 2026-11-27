// 004efbd0 <craggemini_core[66f3c71560d70857]::protocol::inspect_sse::{closure#7}::{closure#0}>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::any::<craggemini_core[66f3c71560d70857]::protocol::inspect_sse::{closure#7}::{closure#0}>
    */

bool __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::any::<craggemini_core[66f3c71560d70857]::protocol::inspect_sse::_closure_7_::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  
  puVar4 = PTR_index_into_00799300;
  lVar1 = param_1[1];
  lVar2 = *param_1;
  do {
    lVar5 = lVar2;
    if (lVar5 == lVar1) break;
    *param_1 = lVar5 + 0x20;
    lVar2 = (*(code *)puVar4)(param_4,lVar5);
    if (lVar2 != 0) break;
    lVar3 = (*(code *)puVar4)(param_4,lVar5);
    lVar2 = lVar5 + 0x20;
  } while (lVar3 == 0);
  return lVar5 != lVar1;
}


