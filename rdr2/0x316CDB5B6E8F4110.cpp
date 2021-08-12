// beat_corpse_cart.ysc @ L1513
bool func_47()
{
  switch (iLocal_631)
  {
    case 0:
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_29))
      {
        iLocal_631++;
      }
      else
      {
        iLocal_29 = VEHICLE::CREATE_VEHICLE(joaat("CART06"), vLocal_427, fLocal_425, true, true, true, false);
      }
      break;
    case 1:
      if (VEHICLE::_0x316CDB5B6E8F4110(uLocal_15[5], iLocal_29, 0))
      {
        return true;
      }
      break;
  }
  return false;
}