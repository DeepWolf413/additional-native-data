// beat_dark_alley_bum.ysc @ L4268
void func_129()
{
  var uVar0;

  if (func_312(uLocal_689[0], Global_36, 0) < 30f)
  {
    if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0]) && !func_126(&uLocal_597))
    {
      func_287(&uLocal_597);
      return;
    }
    if ((!func_126(&uLocal_753) && !func_126(&uLocal_756)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0]))
    {
      if (func_313(&uLocal_597, fLocal_231))
      {
        if (func_45(uLocal_689[0], 0, 1))
        {
          func_310(&uLocal_597);
          func_149(uLocal_689[0], Global_35, func_148("RAMBLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
          func_314(1891783641, uLocal_689[0], 1);
          EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), uLocal_689[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
          fLocal_231 = 10f;
        }
        if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(uLocal_689[0], true, false), 15f, 1, 0, &uVar0, 0, 1, 1, -1))
        {
          Local_602.f_3 = uVar0;
        }
      }
    }
  }
}