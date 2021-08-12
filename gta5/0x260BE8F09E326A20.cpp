// fm_content_island_dj.ysc @ L27195
void func_761(int iParam0, int iParam1)
{
  if (iParam1 == 0)
  {
    return;
  }
  switch (iParam0)
  {
    case 0:
      if (func_713() == 1)
      {
        if (!func_694(iLocal_3045, 0))
        {
          if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3043, false))
          {
            VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_3043, false), 10f, 1, true);
          }
        }
      }
      break;
  }
}