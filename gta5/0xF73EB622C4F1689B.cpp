// am_mp_business_hub.ysc @ L22355
int func_228(var uParam0)
{
  int iVar0;
  
  if (func_229(Local_1827.f_511, &iVar0))
  {
    *uParam0 = iVar0;
  }
  else
  {
    iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(Vector(-100f, -2992.434f, -1508.761f) + Vector(0f, 0f, IntToFloat(Local_1827.f_511 * 32)), 30f, func_153(), 131078);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      if (func_221(iVar0, 1, 0) == Local_1827.f_511)
      {
        *uParam0 = iVar0;
      }
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    return 1;
  }
  return 0;
}