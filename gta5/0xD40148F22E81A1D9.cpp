// barry3c.ysc @ L540
int func_2()
{
  if (func_415(iLocal_188) && func_415(Local_159.f_4))
  {
    if (func_3())
    {
      if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iLocal_188) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(iLocal_188, Local_159.f_4))
      {
        bLocal_180 = true;
        return 1;
      }
    }
    else if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_188, Local_159.f_4))
    {
      bLocal_180 = true;
      return 1;
    }
  }
  return 0;
}