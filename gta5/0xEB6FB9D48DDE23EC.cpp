// gb_smuggler.ysc @ L44438
void func_752(int iParam0, int iParam1)
{
  switch (iParam0)
  {
    case 0:
    case 1:
    case 2:
      PED::SET_PED_CONFIG_FLAG(iParam1, 229, true);
      PED::SET_PED_CAN_EVASIVE_DIVE(iParam1, false);
      PED::SET_PED_STEERS_AROUND_VEHICLES(iParam1, false);
      PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 512, true);
      if (func_270(Local_1939.f_94[iParam0 /*15*/]))
      {
        NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_1939.f_94[iParam0 /*15*/], false);
      }
      break;
  }
}