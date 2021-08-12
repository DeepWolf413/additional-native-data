// av_bearblack_intimidate_bearblack.ysc @ L1784
bool func_28(var uParam0)
{
  PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[0 /*14*/]);
  PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[1 /*14*/]);
  if (!PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[0 /*14*/]) || !PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[1 /*14*/]))
  {
    return false;
  }
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
  {
    EVENT::_0x9520175B35E2268D(uParam0->f_20[0 /*14*/], 1);
    func_57(&(uParam0->f_20[0 /*14*/]), 1, 1);
  }
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
  {
    EVENT::_0x9520175B35E2268D(uParam0->f_20[1 /*14*/], 1);
    func_57(&(uParam0->f_20[1 /*14*/]), 1, 1);
  }
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[2 /*14*/]))
  {
    PED::SET_PED_CONFIG_FLAG(uParam0->f_20[2 /*14*/], 186, true);
    MISC::_0x674B90BE1115846D(uParam0->f_20[2 /*14*/], 1);
    PED::_SET_PED_QUALITY(uParam0->f_20[2 /*14*/], 0);
    TASK::TASK_PLAY_ANIM(uParam0->f_20[2 /*14*/], sLocal_38, sLocal_39, 1000f, -1000f, -1, 131072, 0f, false, 0, false, 0, false);
    PERSISTENCE::_0x3CA5E58C9731A16B(uParam0->f_20[2 /*14*/], iLocal_40);
    MISC::_0x674B90BE1115846D(uParam0->f_20[2 /*14*/], 1);
    PED::SET_PED_KEEP_TASK(uParam0->f_20[2 /*14*/], true);
    ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_20[2 /*14*/], uParam0->f_20[0 /*14*/], true);
    ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_20[0 /*14*/], uParam0->f_20[2 /*14*/], true);
  }
  return true;
}