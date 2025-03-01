Name:           filt
Version:        1.0
Release:        1%{?dist}
Summary:        A simple game
Group:          Games/Entertainment 

License:        GPLv3+
URL:            https://github.com/
Source0:        filt-1.0.tar

BuildRequires:  gcc-c++
BuildRequires:  ncurses-devel
Requires:       ncurses

%description
A simple game implemented in C++.

%prep
%setup -q

%build
make %{?_smp_mflags}

%install
mkdir -p %{buildroot}/usr/local/bin
install -m 755 filt %{buildroot}/usr/local/bin/filt

%files
/usr/local/bin/filt

%changelog
* Thu Feb 26 2025 Nikita Karanaev <karanaev.mail@ru> - 1.0-1
- Initial package.
