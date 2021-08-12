// rcm_jack2.ysc @ L9515
void func_345(var uParam0)
{
  if (func_215(0, uParam0) && func_708(0, uParam0))
  {
    ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_7[0], (*uParam0)[0], PED::GET_PED_BONE_INDEX((*uParam0)[0], 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
    if (PED::_0x569F1E1237508DEB((*uParam0)[0]) != joaat("LOCO_ATTACH_BAIT_BUCKET"))
    {
      PED::_0xA0774E388CE4A679((*uParam0)[0], uParam0->f_7[0], "p_bucket03x_PH_L_HAND", "LOCO_ATTACH_BAIT_BUCKET", 1);
    }
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_7[0], true, true);
  }
}