// finale_heist_prepa.ysc @ L4162
void func_127(int iParam0)
{
  if (Local_389[iParam0 /*22*/].f_20 != 7)
  {
    if (func_377(Local_389[iParam0 /*22*/]))
    {
      if (func_78(Local_389[iParam0 /*22*/], 242628503) || PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_389[iParam0 /*22*/]))
      {
        TASK::CLEAR_PED_TASKS(Local_389[iParam0 /*22*/]);
      }
      else if (func_78(Local_389[iParam0 /*22*/], -1098463898) || func_78(Local_389[iParam0 /*22*/], 993674639))
      {
        PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_389[iParam0 /*22*/]);
      }
      PED::SET_PED_AS_COP(Local_389[iParam0 /*22*/], true);
      TASK::TASK_ARREST_PED(Local_389[iParam0 /*22*/], PLAYER::PLAYER_PED_ID());
      WEAPON::GIVE_WEAPON_TO_PED(Local_389[iParam0 /*22*/], joaat("weapon_pistol"), -1, false, true);
      ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_389[iParam0 /*22*/]);
      PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
      func_128(iParam0);
      Local_389[iParam0 /*22*/].f_18 = 3;
      Local_389[iParam0 /*22*/].f_20 = 7;
    }
  }
}