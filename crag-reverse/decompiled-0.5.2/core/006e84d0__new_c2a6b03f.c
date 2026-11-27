// 006e84d0 new

/* <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::new */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::new(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 local_18 [16];
  
  local_18 = <alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level]>as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>>
             ::from_iter::
             <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>::new>>
                       (0,6);
  if (local_18._8_8_ != 6) {
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1c7207ea9655bfcf55d918eab6d9918c_21_llvm_17559541839288726608,local_18,
               &anon_1c7207ea9655bfcf55d918eab6d9918c_37_llvm_17559541839288726608);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1[1] = 0;
  *param_1 = local_18._0_8_;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


