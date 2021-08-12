// butchercreek.ysc @ L965
void func_46()
{
  if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2711.161f, 710.3177f, 77.27374f, 0f, 0f, -151.2205f, 50.23434f, 27.58518f, 8.132094f, "Butcher Creek - m_volFarmerRegistration");
    iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher Creek - m_volFarmerThreat Agg");
    VOLUME::_0x39816F6F94F385AD(iLocal_20, 2696.193f, 704.9335f, 76.68376f, 0f, 0f, 88.96565f, 4.466922f, 1.336465f, 4.423785f);
    VOLUME::_0x39816F6F94F385AD(iLocal_20, 2698.47f, 703.6447f, 76.68376f, 0f, 0f, -30.46352f, 4.936317f, 2.843117f, 4.423785f);
    VOLUME::_0x39816F6F94F385AD(iLocal_20, 2717.371f, 710.274f, 77.27374f, 0f, 0f, 178.9532f, 3.930448f, 4.35889f, 8.132094f);
    iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher Creek - m_volFarmerRestricted Agg");
    VOLUME::_0x6E0D3C3F828DA773(iLocal_19, iLocal_20);
    VOLUME::_0xBCE668AAF83608BE(iLocal_19, 2711.161f, 710.3177f, 77.27374f, 0f, 0f, -151.2205f, 34.23434f, 22.58518f, 8.132094f);
    iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher Creek - m_volFarmerWarning Agg");
    VOLUME::_0x6E0D3C3F828DA773(iLocal_21, iLocal_19);
    VOLUME::_0xBCE668AAF83608BE(iLocal_21, 2711.161f, 710.3177f, 77.27374f, 0f, 0f, -151.2205f, 46.23434f, 26.58518f, 8.132094f);
    sLocal_17 = "BUTCHER_CREEK";
    LAW::_CREATE_GUARD_ZONE(sLocal_17);
    LAW::_0x8C598A930F471938(sLocal_17, iLocal_18);
    LAW::_0xA1B0E6301E2E02A6(sLocal_17, iLocal_20);
    LAW::_0x35815F372D43E1E5(sLocal_17, iLocal_19);
    LAW::_0xAD3E07C37A7C1ADC(sLocal_17, iLocal_21);
    LAW::_SET_GUARD_ZONE_POSITION(sLocal_17, 2717.486f, 709.7006f, 79.6157f);
    LAW::_0xA8A74AA79FB67159(sLocal_17, iLocal_18);
  }
}