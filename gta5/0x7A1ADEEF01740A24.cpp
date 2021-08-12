// am_crate_drop.ysc @ L10968
void func_124(int iParam0, int iParam1)
{
  var uVar0;
  
  if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_77.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/]))
  {
    if (!MISC::IS_BIT_SET(uLocal_436[iParam0], (0 + iParam1)))
    {
      if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_77.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/]), false))
      {
        if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_77.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/], &uVar0))
        {
          func_125(0, NETWORK::NET_TO_PED(Local_77.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/]), "XPT_KAIE", -1859646258, 2131309714, SYSTEM::ROUND((50f * Global_262145.f_4223)), 1, -1, 0, 0, 0);
          iLocal_443 += 50;
          iLocal_447++;
          MISC::SET_BIT(&(uLocal_436[iParam0]), (0 + iParam1));
        }
      }
    }
    else if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_77.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/])))
    {
      MISC::CLEAR_BIT(&(uLocal_436[iParam0]), (0 + iParam1));
    }
  }
}