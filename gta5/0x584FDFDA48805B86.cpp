// abigail1.ysc @ L39496
void func_308(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    if (func_310(0))
    {
      Global_19984 = 1;
      if (bParam1)
      {
        MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19735);
      }
      Global_19726 = { Global_19744[Global_19743 /*3*/] };
      MOBILE::SET_MOBILE_PHONE_POSITION(Global_19726);
    }
  }
  else if (Global_19984 == 1)
  {
    Global_19984 = 0;
    Global_19726 = { Global_19751[Global_19743 /*3*/] };
    if (bParam1)
    {
      MOBILE::SET_MOBILE_PHONE_POSITION(Global_19735);
    }
    else
    {
      MOBILE::SET_MOBILE_PHONE_POSITION(Global_19726);
    }
  }
}