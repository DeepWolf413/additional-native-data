// am_ferriswheel.ysc @ L7281
void func_156()
{
  int iVar0;
  
  iVar0 = 0;
  Global_2551618 = 0f;
  iLocal_307 = OBJECT::CREATE_OBJECT(iLocal_287, 0f, 1f, 2f, false, false, false);
  ENTITY::SET_ENTITY_COORDS(iLocal_307, Local_309, true, false, false, true);
  ENTITY::SET_ENTITY_ROTATION(iLocal_307, Global_2551618, 0f, 0f, 2, true);
  ENTITY::FREEZE_ENTITY_POSITION(iLocal_307, true);
  ENTITY::SET_ENTITY_LOD_DIST(iLocal_307, 1000);
  ENTITY::SET_ENTITY_INVINCIBLE(iLocal_307, true);
  ENTITY::_0x1A092BB0C3808B96(iLocal_307, false);
  if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
  {
    AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
  }
  iVar0 = 0;
  while (iVar0 < 16)
  {
    func_157(&(Local_1142.f_36[iVar0 /*10*/]), iVar0);
    iVar0++;
  }
  if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
  {
    func_22(64, 1, 0, 1, 0);
  }
}