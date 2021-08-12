// fm_hideout_controler.ysc @ L143557
void func_1593(int iParam0)
{
  if (PED::GET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_258.f_5[iParam0])) < (Local_258.f_288 - 2) || PED::GET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_258.f_5[iParam0])) > Local_258.f_288 + 2)
  {
    if (func_1594(Local_258.f_5[iParam0]))
    {
      PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_258.f_5[iParam0]), Local_258.f_288);
    }
  }
}