// fm_bj_race_controler.ysc @ L542077
void func_9192(int iParam0, int iParam1)
{
  if ((((((((Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("stt_prop_track_speedup") || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("stt_prop_track_speedup_t1")) || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("stt_prop_track_speedup_t2")) || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("stt_prop_stunt_tube_speed")) || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("stt_prop_stunt_tube_speedb")) || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("ar_prop_ar_speed_ring")) || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("ar_prop_ar_tube_speed")) || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("ar_prop_ar_tube_2x_speed")) || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("ar_prop_ar_tube_4x_speed"))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam1))
    {
      OBJECT::_SET_OBJECT_STUNT_PROP_SPEEDUP(iParam1, func_9196(Global_4718592.f_32299[iParam0 /*121*/].f_36));
      OBJECT::_SET_OBJECT_STUNT_PROP_DURATION(iParam1, func_9195(Global_4718592.f_32299[iParam0 /*121*/].f_36));
      MISC::SET_BIT(&(Global_4718592.f_32299[iParam0 /*121*/].f_21), 30);
    }
  }
  if (((Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("stt_prop_track_slowdown") || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("stt_prop_track_slowdown_t1")) || Global_4718592.f_32299[iParam0 /*121*/].f_7 == joaat("stt_prop_track_slowdown_t2")) || func_9194(Global_4718592.f_32299[iParam0 /*121*/].f_7))
  {
    OBJECT::_SET_OBJECT_STUNT_PROP_SPEEDUP(iParam1, func_9193(Global_4718592.f_32299[iParam0 /*121*/].f_36));
  }
}