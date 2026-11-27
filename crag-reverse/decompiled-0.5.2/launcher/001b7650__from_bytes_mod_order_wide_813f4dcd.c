// 001b7650 from_bytes_mod_order_wide

/* <curve25519_dalek[8828c522c30c513]::scalar::Scalar>::from_bytes_mod_order_wide */

undefined8 __rustcall
<curve25519_dalek[8828c522c30c513]::scalar::Scalar>::from_bytes_mod_order_wide(undefined8 param_1)

{
  undefined1 auStack_38 [40];
  
  <curve25519_dalek[8828c522c30c513]::backend::serial::u64::scalar::Scalar52>::from_bytes_wide
            (auStack_38);
  <curve25519_dalek[8828c522c30c513]::backend::serial::u64::scalar::Scalar52>::pack
            (param_1,auStack_38);
  return param_1;
}


