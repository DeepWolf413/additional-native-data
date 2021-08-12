// cornwall1.ysc @ L75805
void func_1881()
{
  if (!func_179(uLocal_363, 32768))
  {
    TASK::CLEAR_PED_TASKS(Local_801[1 /*8*/], true, false);
    func_223(&(Local_801[1 /*8*/].f_4));
    func_1746(&(Local_801[1 /*8*/]), 1);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_801[1 /*8*/], true);
    ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_339[18], "G_M_M_UNICORNWALLGOONS_01", Local_801[1 /*8*/], 0);
    ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_339[18], "CS_Uncle", Local_254[0 /*11*/], 0);
    ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_339[18], "s_interact_lantern01x", WEAPON::_0xC6A6789BB405D11C(Local_801[1 /*8*/], 1), 0);
    func_1295(Local_801[1 /*8*/], 1);
    PED::_0xC163DAC52AC975D3(Local_801[1 /*8*/], 0);
    PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_801[1 /*8*/], 24593);
    WEAPON::SET_CURRENT_PED_WEAPON(Local_254[0 /*11*/], joaat("WEAPON_MELEE_KNIFE_UNCLE"), false, 0, false, false);
    WEAPON::SET_CURRENT_PED_WEAPON(Local_254[0 /*11*/], joaat("WEAPON_SHOTGUN_DOUBLEBARREL_UNCLE"), true, 10, false, false);
    WEAPON::SET_CURRENT_PED_WEAPON(Local_254[0 /*11*/], joaat("WEAPON_UNARMED"), true, 1, false, false);
    WEAPON::_0xCEF4C65DE502D367(Local_801[1 /*8*/], 1, 0, 0, 0);
    WEAPON::_0xCEF4C65DE502D367(Local_801[1 /*8*/], 1, 1, 0, 0);
    ANIMSCENE::START_ANIM_SCENE(uLocal_339[18]);
    func_850(&uLocal_363, 32768);
  }
}