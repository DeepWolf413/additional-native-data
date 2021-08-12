// rcm_gunslinger5_1.ysc @ L43279
void func_1500(int iParam0, int iParam1)
{
  if ((ENTITY::DOES_ENTITY_EXIST(iLocal_922[0]) && func_1874(Local_244[iParam0 /*86*/][iParam1 /*15*/], iLocal_922[0], 0)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "GUN5GAT"))
  {
    func_731(&(Local_244[iParam0 /*86*/][iParam1 /*15*/].f_1), Local_244[iParam0 /*86*/][iParam1 /*15*/], joaat("BLIP_STYLE_ENEMY"), 0);
    TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_244[iParam0 /*86*/][iParam1 /*15*/], true);
    VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_922[0], 0, "GUN5GAT", true);
    VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_922[0], 1000f);
    func_1875(iParam0, iParam1, 5);
    bLocal_1008 = true;
    return;
  }
  if (Local_244[iParam0 /*86*/][iParam1 /*15*/].f_11 < 7)
  {
    func_731(&(Local_244[iParam0 /*86*/][iParam1 /*15*/].f_1), Local_244[iParam0 /*86*/][iParam1 /*15*/], joaat("BLIP_STYLE_ENEMY"), 0);
    TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_244[iParam0 /*86*/][iParam1 /*15*/], true);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_244[iParam0 /*86*/][iParam1 /*15*/], true);
    TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Local_244[iParam0 /*86*/][iParam1 /*15*/], Local_244[iParam0 /*86*/][iParam1 /*15*/].f_6, VOLUME::_GET_VOLUME_COORDS(uLocal_928[12]), 3f, true, 0.5f, 4f, true, 5, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
    PED::SET_PED_SEEING_RANGE(Local_244[iParam0 /*86*/][iParam1 /*15*/], 200f);
    func_1875(iParam0, iParam1, 4);
  }
}