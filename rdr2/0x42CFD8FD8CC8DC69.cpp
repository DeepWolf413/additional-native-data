// beat_town_confrontation.ysc @ L2058
void func_46()
{
  if (!ENTITY::IS_ENTITY_DEAD(uLocal_365[0]))
  {
    func_145(uLocal_365[0], &Local_14, 0);
    WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_365[0], true, true);
    TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_365[0], true, 100f);
    TASK::SET_PED_PATH_AVOID_FIRE(uLocal_365[0], true);
    TASK::_0x42CFD8FD8CC8DC69(uLocal_365[0], 1);
    PED::SET_PED_COMBAT_MOVEMENT(uLocal_365[0], 1);
    PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_365[0], 71, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_365[0], 124, true);
    ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_365[0], Local_208[0 /*32*/].f_6, Local_208[0 /*32*/].f_9, true, false, true);
    func_146(uLocal_365[0], &(Local_208[0 /*32*/].f_23), 0);
    PED::_0xF1C03A5352243A30(uLocal_365[0]);
    func_147(&(Local_208[0 /*32*/].f_22));
    PED::SET_PED_CONFIG_FLAG(uLocal_365[0], 146, true);
    PED::SET_PED_CONFIG_FLAG(uLocal_365[0], 297, true);
    PED::SET_PED_CONFIG_FLAG(uLocal_365[0], 130, true);
    PED::SET_PED_CONFIG_FLAG(uLocal_365[0], 317, true);
    PED::SET_PED_CONFIG_FLAG(uLocal_365[0], 301, false);
    PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_365[0], "Default_Curious");
    if (iLocal_372 == 3)
    {
      PED::_0x89F5E7ADECCCB49C(uLocal_365[0], "Default_Brave");
    }
  }
}