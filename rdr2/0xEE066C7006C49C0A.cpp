// beat_murder_campfire.ysc @ L10867
void func_267()
{
  if (iLocal_34 >= 3 || func_29(iLocal_528, 512))
  {
    return;
  }
  if (!func_313(&uLocal_469))
  {
    func_120(&uLocal_469);
  }
  if (func_286(&uLocal_469) > fLocal_478)
  {
    AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_15[6], "IDLE", false);
    if (Local_77.f_98[6] < 30f)
    {
      func_528(249295937, iLocal_15[6], 1);
      iLocal_34++;
    }
    func_120(&uLocal_469);
    fLocal_478 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 4f);
  }
}