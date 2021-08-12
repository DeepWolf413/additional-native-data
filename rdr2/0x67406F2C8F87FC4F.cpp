// beat_public_hanging.ysc @ L22125
void func_577()
{
  TASK::UNCUFF_PED(iLocal_946[0]);
  if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_903))
  {
    if (ANIMSCENE::_0x6F1F0B17109309DA(Local_903, "CRIMINAL"))
    {
      ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "CRIMINAL", iLocal_946[0]);
      TASK::CLEAR_PED_TASKS(iLocal_946[0], true, false);
    }
  }
}