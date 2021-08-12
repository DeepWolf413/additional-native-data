// native_son2.ysc @ L69612
void func_1844()
{
  func_2363(1);
  if (bLocal_401)
  {
    if (func_425(Global_35, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_358))
    {
      if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_358, sLocal_52, sLocal_53, 1))
      {
        if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > fLocal_2447)
        {
          fLocal_2447 = (fLocal_2447 + 0.05f);
        }
        else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) < fLocal_2447)
        {
          fLocal_2447 = (fLocal_2447 - 0.05f);
        }
        fLocal_2447 = func_1725(fLocal_2447, 0f, 1f);
        ENTITY::_SET_ENTITY_ANIM_SPEED(iLocal_358, sLocal_52, sLocal_53, fLocal_2447);
      }
    }
    func_2364(&(Local_263[iLocal_2444 /*10*/]));
    func_1842(&(Local_263[iLocal_2444 /*10*/]), 1046898278 /* Float: 0.225f */, -1, 0);
  }
}