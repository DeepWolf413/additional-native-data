// freemode.ysc @ L967993
void func_15130()
{
  bool bVar0;
  bool bVar1;
  struct<6> Var2;
  struct<6> Var8;
  
  if (!func_120(&(Global_2544210.f_6621)) || func_118(&(Global_2544210.f_6621), Global_2544210.f_6621.f_2, 0))
  {
    func_19544(&(Global_2544210.f_6621));
    func_119(&(Global_2544210.f_6621), 0, 0);
    bVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
    bVar1 = func_19791(9615, -1, 0);
    CLOCK::GET_UTC_TIME(&Var2, &(Var2.f_1), &(Var2.f_2), &(Var2.f_3), &(Var2.f_4), &(Var2.f_5));
    NETWORK::CONVERT_POSIX_TIME(bVar1, &Var8);
    if (func_15145(Var8, Var2, (bVar0 - bVar1)))
    {
      func_588(9615, bVar0, -1, 1, 0);
      func_15143();
      func_15141();
    }
    else if (Global_2544210.f_6621.f_3 == -1)
    {
      func_15143();
      func_15131();
    }
  }
}