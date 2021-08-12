// triathlonsp.ysc @ L97893
void func_622(bool bParam0)
{
  if (bParam0)
  {
    if (Local_753 < (Local_753.f_1 / 2))
    {
      PLAYER::RESTORE_PLAYER_STAMINA(PLAYER::PLAYER_ID(), 0.33f);
    }
  }
  else
  {
    Local_753 = Local_753.f_1;
  }
}