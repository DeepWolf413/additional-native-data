// fm_content_island_heist.ysc @ L58079
void func_2085(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
  switch (iParam0)
  {
    case 0:
      switch (func_488(iParam0))
      {
        case 4:
          if ((!func_626(0) && !func_633(iLocal_12607, 0)) && func_808(Local_12697.f_795[iParam0 /*6*/]))
          {
            if (!VEHICLE::ARE_PLANE_PROPELLERS_INTACT(iParam1))
            {
              func_734(0);
            }
            else if (!VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam1))
            {
              func_734(0);
            }
            else if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam1) <= 0f)
            {
              func_734(0);
            }
            else if (func_2086(&iParam1))
            {
              func_734(0);
            }
          }
          break;
      }
      break;
  }
}