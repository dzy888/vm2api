// 005c9fa0 <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::try_for_each::call<&alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::result::Result<(),serde_json[dc3825464c436029]::error::Error>,<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>as_serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq<&alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::{closure#0}>::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<(),serde_json[dc3825464c436029]::error::Error>>

/* <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<alloc[12e961f32105355]::string::String>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::try_fold::<(),
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::try_for_each::call<&alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::result::Result<(), serde_json[dc3825464c436029]::error::Error>, <&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>> as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq<&alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::{closure#0}>::{closure#0},
   core[c0acaeba6ab4c2e0]::result::Result<(), serde_json[dc3825464c436029]::error::Error>> */

longlong __rustcall
<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::try_fold::
<(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::try_for_each::call<&alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::result::Result<(),serde_json[dc3825464c436029]::error::Error>,<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>as_serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq<&alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<(),serde_json[dc3825464c436029]::error::Error>>
          (void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *in_RDI;
  undefined1 *local_40;
  undefined1 local_38 [8];
  
  lVar3 = *in_RDI;
  lVar1 = in_RDI[1];
  local_40 = local_38;
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + 0x18;
    *in_RDI = lVar3;
    lVar2 = <&mut_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::try_for_each::call<&alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::result::Result<(),serde_json[dc3825464c436029]::error::Error>,<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>as_serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq<&alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<((),&alloc[12e961f32105355]::string::String)>>
            ::call_mut(&local_40);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  lVar3 = in_RDI[2];
  lVar1 = in_RDI[3];
  local_40 = local_38;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    lVar3 = lVar3 + 0x18;
    in_RDI[2] = lVar3;
    lVar2 = <&mut_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::try_for_each::call<&alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::result::Result<(),serde_json[dc3825464c436029]::error::Error>,<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>as_serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq<&alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<((),&alloc[12e961f32105355]::string::String)>>
            ::call_mut(&local_40);
  } while (lVar2 == 0);
  return lVar2;
}


