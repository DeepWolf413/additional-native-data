// doc_player_journal.ysc @ L1921
void func_41(var uParam0)
{
  if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1, false))
  {
    ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
    ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(uParam0->f_1, Global_35, -1);
    ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
  }
}