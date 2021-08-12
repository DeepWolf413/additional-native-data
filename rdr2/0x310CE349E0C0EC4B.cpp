// beat_drunk_dueler.ysc @ L33490
void func_1018(var uParam0, var uParam1)
{
  if (uParam1->f_18 < 0f)
  {
    if (uParam1->f_17 > 0.9f)
    {
      if (uParam0->f_90 != -1)
      {
        uParam1->f_73 = uParam0->f_90;
      }
      else if (func_271() && !func_162(uParam0, 16))
      {
        if (func_162(uParam0, 512))
        {
          uParam1->f_73 = 34606;
        }
        else
        {
          uParam1->f_73 = 22798;
        }
      }
      else
      {
        uParam1->f_73 = 21030;
      }
    }
    else
    {
      uParam1->f_73 = uParam1->f_72;
    }
  }
  PLAYER::_0x310CE349E0C0EC4B(PLAYER::PLAYER_ID(), uParam0->f_1, uParam1->f_73);
}