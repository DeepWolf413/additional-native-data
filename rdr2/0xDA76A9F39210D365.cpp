// abigail2_1.ysc @ L35353
void func_824(var uParam0)
{
  char* sVar0;

  if (!func_845(uParam0->f_2, 1))
  {
    if (func_1315(uParam0))
    {
      if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
      {
        sVar0 = func_1316(ENTITY::GET_ENTITY_MODEL(Global_35));
        if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, sVar0))
        {
          ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sVar0, Global_35, 0);
        }
        else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_zero") && func_296())
        {
          ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
        }
        else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_three") && func_1026())
        {
          ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
        }
        ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
        func_811(&(uParam0->f_2), 1);
      }
    }
  }
}